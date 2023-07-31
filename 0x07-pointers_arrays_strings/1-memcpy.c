#include "main.h"

/**
* _memcpy - Function that copies memory area.
*
* @dest: Destitation memory area.
* @src: Source memory area.
* @n: Number of bytes.
*
* Return: Pointer to @dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for  (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
