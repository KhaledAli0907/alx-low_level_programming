#include "main.h"

/**
* rot13 - encodes a string using rot 13
*
* @s: Input String
*
* Return: String after processing
*/

char *rot13(char *s)
{
	int i, key = 13;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (((s[i] - 'a') + key) % 26) + 'a';
		}
		else
		{
			s[i] = (((s[i] - 'A') + key) % 26) + 'A';
		}
	}

	return (s);
}
