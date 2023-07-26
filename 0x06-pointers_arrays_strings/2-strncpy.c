#include "main.h"

/**
* _strncpy - Copies a string
*
* @dest: Destination
* @src: Source
* @n: Number of bytes
*
* Return: Dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* copy the string */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* fill the reamaining bytes in dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
