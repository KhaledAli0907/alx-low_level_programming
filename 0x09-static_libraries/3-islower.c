#include "main.h"
/**
* _islower - checks if the provided letter is lower case or not
*
*
* @c : ascii value for letter
*
* Return: Always 0 (Success)
*/

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
