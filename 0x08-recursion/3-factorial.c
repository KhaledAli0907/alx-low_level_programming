#include "main.h"

/**
 * factorial - get the factorial of givin number
 *
 * @n: integer
 *
 * Return: factorial of a number, -1 if there is an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
