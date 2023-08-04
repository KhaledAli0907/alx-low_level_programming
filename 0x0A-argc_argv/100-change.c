#include <stdio.h>
#include <stdlib.h>

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
	int cents, i = 0, ncoins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	/* return if user typed wrong argument */
	if (argc != 2)
		return (printf("Error\n"), 1);

	cents = atoi(argv[1]);
	/*  return if the number is a nigative number */
	if (cents < 0)
		return (printf("%i\n", 0), 1);
	for (; i < 5; i++)
	{
		if (cents >= coins[i])
		{
			ncoins += (cents / coins[i]);
			cents = cents % coins[i];
			if (cents % coins[i] == 0)
				break;
		}
	}
	return (printf("%d\n", ncoins), 0);
}
