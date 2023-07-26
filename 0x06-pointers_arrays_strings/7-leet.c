#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

char *leet(char *s)
{
	
	char upper[] = {'A','E', 'O', 'T', 'L'};
	char lower[] = { 'a', 'e', 'o', 't', 'l'};
	char values[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
			{
				s[i] = values[j];
			}
		}
	}
	return (s);
}
