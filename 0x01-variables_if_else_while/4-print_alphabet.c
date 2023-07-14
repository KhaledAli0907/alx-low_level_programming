#include <stdio.h>
#include <string.h>
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
		if (alpha[i] != 'q' && alpha[i] != 'e')
			putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
