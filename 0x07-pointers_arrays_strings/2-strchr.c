#include "main.h"
#include <stddef.h>

/**
* _strchr - Function That locates a character in a string.
*
* @s: string.
* @c: the disired character.
*
* Return: a pointer to the first occurrence of the character NULL if not found.
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		if (s[i] == 0)
			return (NULL);
	}
	return (NULL);
}
