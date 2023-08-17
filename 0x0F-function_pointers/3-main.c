#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always  0 (sucess)
 */
int main(int argc, char **argv)
{
	int a, b, res;
	int (*fptr)(int, int);
	char *op = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	/* handle operator erros */
	if (argv[2][1] != '\0' || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* handle divid by 0 error */
	if ((*op == '/' || *op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	fptr = get_op_func(op);
	res = fptr(a, b);

	return (printf("%d\n", res), 0);
}
