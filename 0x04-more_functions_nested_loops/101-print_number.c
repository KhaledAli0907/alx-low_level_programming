#include "main.h"

/**
* print_number - prints a number
*
* @n : integer
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		/* change the number to positivie number and print the negative sign */
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		/* print the first digits */
		print_number(num / 10);

	/* print the last digit */
	_putchar((num % 10) + '0');
}
