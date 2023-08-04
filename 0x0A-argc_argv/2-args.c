#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* @argc: Number of argumnets
* @argv: Array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
