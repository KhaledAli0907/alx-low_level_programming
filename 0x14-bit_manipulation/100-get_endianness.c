#include "main.h"

/**
 * get_endianess - Checks the endianness
 *
 * Return - 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int c = 1;

	return (*(char *) &c);
}
