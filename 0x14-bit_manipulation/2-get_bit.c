#include "main.h"

/**
 * get_bit - Finds the value of a bit at a given index
 *
 * @n: number
 * @index: the desired index
 *
 * Return: The Value of the bit, 0 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 <= index)
		return (-1);

	return (n >> index & 1);
}
