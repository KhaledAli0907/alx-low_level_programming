#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* @argc: Number of argumnets
* @argv: Array of arguments
*
* Return: 0 (Success), 1 otherwise.
*/
int main(int argc, char **argv)
{
	int i = 1, result = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (; i < argc; i++)
		result *= atoi(argv[i]);

	printf("%d\n", result);
	return (0);
}
