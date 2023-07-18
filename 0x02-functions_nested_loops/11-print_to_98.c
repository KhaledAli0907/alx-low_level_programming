#include "main.h"
#include "stdio.h"

/**
* print_to_98 - Entry point
*
* @n : integer
*
* Return: print the number in seqeuense (Success)
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 98; i++)
			printf("%i, ", i);

	else if (n > 98)
		for (i = n; i >= 98; i--)
			printf("%i, ", i);
	else
		printf("%i", n);
	printf("\n");
}
