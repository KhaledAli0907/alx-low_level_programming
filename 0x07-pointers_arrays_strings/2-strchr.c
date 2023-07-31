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
	for (; *s = '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);

	return (NULL);
}
