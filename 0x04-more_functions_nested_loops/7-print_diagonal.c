#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
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
