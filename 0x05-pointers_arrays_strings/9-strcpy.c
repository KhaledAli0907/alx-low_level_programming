#include "main.h"

/**
* _strcpy - Copies a string to a destenation
*
* @dst: destenation
* @src: source
*
* Return: pointer to destenation
*/

char *_strcpy(char *dst, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
		dst[i] = src[i];

	return (dst);
}
