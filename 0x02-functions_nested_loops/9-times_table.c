#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void times_table(void)
{
	int row, col, n;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (col = 0; col <= 9; col++)
		{
				n = row * col;

				if (n >= 10)
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
				else if (n < 10 && col != 0)
				{
					_putchar(' ');
					_putchar(n + '0');
				}
				else if (col != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (col == 9)
				{
					_putchar('$');
				}
		}
		_putchar('\n');
	}
}
