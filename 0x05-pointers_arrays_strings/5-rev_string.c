#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
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
