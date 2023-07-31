#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
*
* @s: buffer.
* @b: char to be written.
* @n: number of bytes.
*
* Return: a pointer to the memory area @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
