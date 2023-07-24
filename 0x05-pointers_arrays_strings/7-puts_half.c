#include "main.h"

/**
* puts_half - prints half of the string
*
* @str: String
*/

void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (n = len / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else if (len % 2 == 1)
	{
		for (n = (len - 1) / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
