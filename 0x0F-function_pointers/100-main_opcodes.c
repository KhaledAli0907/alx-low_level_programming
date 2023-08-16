#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	char *mptr = (char *) main;
	int nb = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);
	if (nb < 0 || !nb)
	{
		printf("Error\n");
		exit(2);
	}
	while (nb--)
		printf("%02hhx%s", *mptr++, nb ? " " : "\n");
	return (0);

}
