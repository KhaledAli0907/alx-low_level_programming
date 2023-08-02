#include "main.h"

/**
 * check_sqrt - helper function
 * @a: number
 * @b: number
 *
 * Return: the sqaure root
 */

int check_sqrt(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if (b * b >= a)
		return (-1);
	return (check_sqrt(a, b + 1));
}


/**
 * _sqrt_recursion - return the natural sqaure root of @n
 *
 * @n: number
 *
 * Return: natural sqaure root -1 of there is an error
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (check_sqrt(n, 0));
}
