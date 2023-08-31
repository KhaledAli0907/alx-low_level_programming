#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0s and 1s
 *
 * Return: the converted Number, 0 if b not all 1s and 0s
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, mult = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = (strlen(b) - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += ((b[i] - '0') * mult);
		mult *= 2;
	}
	return (result);
}
