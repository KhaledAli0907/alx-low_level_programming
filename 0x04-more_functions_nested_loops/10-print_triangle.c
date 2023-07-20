#include "main.h"

/**
* print_triangle - prints a trianagle
*
* @size : size of the trianagle
*/

void print_triangle(int size)
{
	int row, hash, space;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		for (space = size - 2; space >= row; space--)
			_putchar(' '); /* print spaces */

		for (hash = 0; hash <= row; hash++)
			_putchar('#'); /* prints hashtags */

		_putchar('\n');
	}
}
