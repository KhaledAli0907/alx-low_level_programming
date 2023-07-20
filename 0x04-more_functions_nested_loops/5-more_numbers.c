#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14
*/

void more_numbers(void)
{
	int i, row;

	for (row = 0; row <= 10; row++) /* print rows */
	{
		for (i = 0; i <= 14; i++) /* print numbers */
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
