#include "main.h"
#include "stdio.h"

/**
* print_array - Prints n elments of an array of integers
*
* @a: Array
* @n: number of elmenets
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
