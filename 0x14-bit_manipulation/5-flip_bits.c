#include "main.h"

/**
 * flip_bits - return the number of bits we need to flip to get/
 * from one number to another
 *
 * @n: number
 * @m: number
 *
 * Return: number of bites
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while ((n != 0) || (m != 0))
	{
		if ((n & 1) != (m & 1))
			count++;
		/* shift the bytes */
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
