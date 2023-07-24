#include "main.h"

/**
* rev_string - reverses a string
*
* @s: string
*/

void rev_string(char *s)
{
	char tmp;
	int i, j, len;

	len = 0;
	while (s[len] != '\0')
		len++;

	i = 0;
	j = len - 1;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
