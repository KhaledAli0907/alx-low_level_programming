#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int lenAlpha = strlen(alpha);

	for (i = 0; i < lenAlpha; i++)
	{
		putchar(alpha[i]);
	}
	for (i = 0; i < lenAlpha; i++)
	{
		putchar(toupper(alpha[i]));
	}
	putchar('\n');
	return (0);
}
