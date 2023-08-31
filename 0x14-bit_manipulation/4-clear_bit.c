#include "main.h"

/**
 * clear_bit - Sets a value of a bit to 0 at a givin index.
 *
 * @n: pointer to number
 * @index: the givin index
 *
 * Return: 1 if it worked, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(n) * 8) <= index)
		return (-1);

	*n = *n & ~(1l << index);
	return (1);
}
