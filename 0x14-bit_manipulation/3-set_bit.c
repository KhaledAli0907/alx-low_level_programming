#include "main.h"

/**
 * set_bit - set a value of a bit to 1 at a givin index
 *
 * @n: pointer to int
 * @index: the desired index
 *
 * Return: 1 if it worked, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n = *n | 1L << index;
	return (1);
}
