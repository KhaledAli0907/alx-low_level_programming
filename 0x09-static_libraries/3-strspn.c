#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
*
* @s: string.
* @accept: string to compare.
*
* Return: number of bytes in the initial segment of @s.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, value = 0, check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}
	return (value);
}
