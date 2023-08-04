#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes.
*
* @s: string.
* @accept: string.
*
* Return: a pointer to the byte in s tha matches one of the bytes in accept\
* NUll otherwise.
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return (s);
	}
	return (NULL);
}
