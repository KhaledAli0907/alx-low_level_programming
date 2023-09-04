#include "main.h"
#include <elf.h>

void printMagic(Elf64_Ehdr h);
void printClass(Elf64_Ehdr h);
void printData(Elf64_Ehdr h);
void printVersion(Elf64_Ehdr h);
void printOsabi(Elf64_Ehdr h);
void more_osabi(Elf64_Ehdr h);
void printAbiv(Elf64_Ehdr h);
void printType(Elf64_Ehdr h);
void printEntry(Elf64_Ehdr h);
/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 1 on success, 0 otherwise.
 */
int main(int argc, char **argv)
{
	int fp = 0;
	Elf64_Ehdr h;
	ssize_t bytes = 0;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: header elf_filename\n"), exit(98);

	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
		dprintf(STDERR_FILENO, "Can't open %s\n", argv[1]), exit(98);
	bytes = read(fp, &h, sizeof(h));
	if (bytes < 1 || bytes != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read %s\n", argv[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L'
			&& h.e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
		dprintf(STDERR_FILENO, "Not an Elf file: %s\n", argv[1]), exit(98);

	printMagic(h);
	printClass(h);
	printData(h);
	printVersion(h);
	printOsabi(h);
	printAbiv(h);
	printType(h);
	printEntry(h);

	if (close(fp))
		dprintf(STDERR_FILENO, "Can't close file: %d\n", fp), exit(98);
	return (EXIT_SUCCESS);
}

/**
 * printMagic - prints the magic number
 *
 * @h: elf header
 */
void printMagic(Elf64_Ehdr h)
{
	int i = 0;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}


/**
 * printClass - prints elf class
 *
 * @h: elf header
 */
void printClass(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
 * printData - prints data
 *
 * @h: elf header
 */
void printData(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
 * printVersion - prints the version number
 *
 * @h: elf header
 */
void printVersion(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("\"\"");
			break;
		case EV_CURRENT:
			printf(" (current)");
			break;
	}
	printf("\n");
}

/**
 * printOsabi - prints the magic number
 *
 * @h: elf header
 */
void printOsabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP_UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Sun Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		default:
			more_osabi(h);
			break;
	}
	printf("\n");
}

/**
 * more_osabi - the rest of osabi cases
 *
 * @h: elf header
 */
void more_osabi(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - Open BSD");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;

	}
}

/**
 * printAbiv - prints ABI Version
 *
 * @h: elf header
 */
void printAbiv(Elf64_Ehdr h)
{
	 printf("ABI Version:                      %d\n",
			 h.e_ident[EI_ABIVERSION]);
}

/**
 * printData - prints the ELF type
 *
 * @h: elf header
 */
void printType(Elf64_Ehdr h)
{
	char *pointer = (char *) &h.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (pointer[i])
	{
		case ET_NONE:
			printf("NONE (none)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", pointer[i]);
			break;
	}
	printf("\n");
}

/**
 * printEntry - prints ELF entry address
 *
 * @h: elf header
 */
void printEntry(Elf64_Ehdr h)
{
	int len = 0, i = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA != ELFDATA2MSB])
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}
