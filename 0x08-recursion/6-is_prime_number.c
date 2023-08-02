#include "main.h"

/**
 * check_prime - check the number
 *
 * @a: int
 * @b: int
 *
 * Return: 1 if @a is prime ,0 otherwise.
 */

int check_prime(int a, int b)
{
	if (b >= a && a > 1)
		return (1);
	else if (a % b == 0 || a <= 1)
		return (0);
	return (check_prime(a, b + 1));
}

/**
 * is_prime_number - checks if the number is a prime number
 *
 * @n: integer
 *
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
