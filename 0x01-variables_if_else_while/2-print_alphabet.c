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

	for (int i = 0; i < strlen(alpha); i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
