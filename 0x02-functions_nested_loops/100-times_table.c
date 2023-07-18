#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void print_times_table(int n)
{
	int row, col, i;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		for (col = 0; col <= n; col++)
		{
			i = row * col;

			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (i < 10 && col != 0)
			{
				_putchar(' ');
				_putchar(i + '0');
			}
			if (col != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
