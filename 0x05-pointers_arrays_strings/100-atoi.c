#include "main.h"

/**
* _atoi - converts string into an integer.
*
* @s: string.
*
* Return: number.
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	char *tmp = s;

	while (*tmp != '\0' && (*tmp < '0' || *tmp > '9'))
	{
		if (*tmp == '-')
			sign *= -1;
		tmp++;
	}
	if (*tmp != '\0')
	{
		do {
			num  = (num * 10) + (*tmp - '0');
			tmp++;
		} while (*tmp >= '0' && *tmp <= '9');
	}
	return (num * sign);
}
