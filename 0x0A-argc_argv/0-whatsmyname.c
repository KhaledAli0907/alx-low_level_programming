#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 otherwise
*/
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
		return (1);
}
