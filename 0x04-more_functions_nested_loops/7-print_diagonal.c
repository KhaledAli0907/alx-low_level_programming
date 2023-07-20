#include "main.h"

/**
* print_diagonal - draws a diagonal line of the terminal
*
* @n : number of lines
*
*/

void print_diagonal(int n)
{
	int row, col;

	for (row = 1; row <= n; row++)
	{
		for (col = 1; col < row; col++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
