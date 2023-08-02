#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if a string is polindrome or not
 *
 * @s: string
 *
 * Return: 1 if the string @s a polindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int i = 0, j = strlen(s) - 1;

	while (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}
