#include "main.h"

/**
* _strlen - Function that returns the length of a string
*
* @s: string
*
* Return: length
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
