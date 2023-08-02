#include "main.h"
#include <string.h>

/**
 * check_palindrome - check if a string is polindrome or not using recursion
 *
 * @s: string
 * @i: start
 * @j: end
 *
 * Return: 1 if string @s a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (check_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - check if a string is polindrome or not
 *
 * @s: string
 *
 * Return: 1 if the string @s a polindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, strlen(s) - 1));
}
