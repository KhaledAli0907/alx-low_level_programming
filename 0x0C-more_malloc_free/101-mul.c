#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void print(long n);
/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Alawys 0 (Success)
 */
int main(int argc, char **argv)
{
	char *err = "Error";
	int size = strlen(err);
	long mul = 0;
	int i = 0, j = 0, x = 0;

	if (argc != 3)
	{
		for (x = 0; x < size; x++)
			_putchar(err[x]);
		_putchar('\n');
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				for (x = 0; x < size; x++)
					_putchar(err[x]);
				_putchar('\n');
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	print(mul);
	_putchar('\n');
	return (0);
}

/**
 * print - print long number
 * @n: long int
 */
void print(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar('0' + n % 10);
}
