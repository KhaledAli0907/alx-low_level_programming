#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	printf("%i\n", argc - 1);
	(void) argv;
	return (0);
}
