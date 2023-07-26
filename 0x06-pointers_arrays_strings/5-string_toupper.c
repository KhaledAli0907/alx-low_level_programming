#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
*
* @s: Input string.
*
* Return: The input string after changes.
*/

char *string_toupper(char *s)
{
	int len = 0, i;
	int dif = 'a' - 'A';

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= dif;

	return (s);
}
