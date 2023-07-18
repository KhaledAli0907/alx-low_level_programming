#include "main.h"

/**
* print_last_digit - Entry point
*
* @n : Integer
*
* Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + '0');
		return (last * -1);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}

}
