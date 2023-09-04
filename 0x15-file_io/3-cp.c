#include "main.h"
#include <stdio.h>
#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - copies the content of a file to another file
 *
 * @argc: number of argc
 * @argv: array of argc
 *
 * Return: always 1
 */
int main(int argc, char **argv)
{
	int fin = 0, fout = 0;
	char buff[1024];
	ssize_t bytes = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fin = open(argv[1], O_RDONLY);
	if (fin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fout = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, PERMISSION);
	if (fout == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes = read(fin, buff, 1024)) > 0)
		if (write(fout, buff, bytes) != bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
	}
	fin = close(fin);
	fout = close(fout);

	if (fin)
		dprintf(STDERR_FILENO, "error: can't close fd %d\n", fin), exit(100);
	if (fout)
		dprintf(STDERR_FILENO, "error: can't close fd %d\n", fout), exit(100);
	return (EXIT_SUCCESS);
}
