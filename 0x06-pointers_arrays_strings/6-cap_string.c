#include "main.h"
#include <ctype.h>

/**
* cap_string - Capitalizes all words of a string.
*
* @s: String.
*
* Return: The string @s after capitalization.
*/

char *cap_string(char *s)
{
	int seprators[] = {' ', '\t', '\n', ',', '.', ';', '!', '?', '"',
		'(', ')', '}', '{'};
	int diff = 'a' - 'A', i;
	unsigned long int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= diff;

		diff = 0;

		for (j = 0; j < (sizeof(seprators) / sizeof(int)); j++)
		{
			if (s[i] == seprators[j])
			{
				diff = 32;
				break;
			}
		}
	}
	return (s);
}
