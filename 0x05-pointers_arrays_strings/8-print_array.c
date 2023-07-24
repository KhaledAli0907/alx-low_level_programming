#include "main.h"

/**
* print_array - Prints n elments of an array of integers
*
* @a: Array
* @n: number of elmenets
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(a[i]);
	_putchar('\n');
}
