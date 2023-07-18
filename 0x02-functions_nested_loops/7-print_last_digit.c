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
	if (n < 0)
		n = n * -1;

	last = n % 10;
	_putchar(last + '0');
	return (last % 10);
}
