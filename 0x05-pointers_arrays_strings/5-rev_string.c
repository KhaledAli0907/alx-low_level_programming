#include "main.h"

/**
* rev_string - print a string in reverse
*
* @s: string
*/

void rev_string(char *s)
{
	int i;

	for (i = _strlen(s); i > 0; i--)
		_putchar(s[i]);
}
