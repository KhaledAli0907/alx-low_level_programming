#include "main.h"
#include <string.h>
#include <stdlib.h>

int _atoi(const char *n);
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
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				for (x = 0; x < size; x++)
					_putchar(err[x]);
				_putchar('\n');
				exit(98);
			}
		}
	}
	mul = _atoi(argv[1]) * _atoi(argv[2]);
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

	_putchar('0' + (n % 10));
}

/**
 * _atoi - convert char to int
 *
 * @n: number
 *
 * Return: number
 */
int _atoi(const char *n)
{
	int sign = 1;
	unsigned long int resp = 0, firstnum = 0, i = 0;

	for(firstnum = 0; !(n[firstnum] >= 48 && n[firstnum] <= 57); firstnum++)
	{
		if (n[firstnum] == '-')
			sign *= -1;
	}
	for (i = firstnum; n[i] >= '0' && n[i] <= '9'; i++)
	{
		resp *= 10;
		resp += (n[i] - '0');
	}
	return (resp * sign);
}
