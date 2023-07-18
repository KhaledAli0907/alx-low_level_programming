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

	_putchar((n % 10) + '0');
	return (n % 10);
}
