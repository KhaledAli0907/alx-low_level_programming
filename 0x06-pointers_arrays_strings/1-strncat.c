#include "main.h"

/**
* _strncat - Concatenates @n bytes from the src string
*
* @dest: destenation string
* @src: source string
* @n: number of bytes
*
* Return: Dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
