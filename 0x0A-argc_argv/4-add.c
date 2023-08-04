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
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
