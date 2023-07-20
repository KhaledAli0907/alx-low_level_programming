#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, row;

	for (row = 0; row <= 10; row++) /* print rows */
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
