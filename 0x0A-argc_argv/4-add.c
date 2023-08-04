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
	char *c;

	if (argc == 1)
	{
		printf("%i\n", 0);
		return (0);
	}
	for (c = argv[i]; i < argc; i++)
	{
		if (*c < '0' || *c > '9')
			return (printf("Error\n"), 1);
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
