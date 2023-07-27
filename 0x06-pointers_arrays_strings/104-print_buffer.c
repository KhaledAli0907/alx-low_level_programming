#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints a buffer
*
* @b: pointer to buffer
* @size: size of the buffer
*/

void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	while (i < size)
	{
		printf("%08x: ", i);
		j = 0;
		while (j < 10 && i + j < size)
		{
			printf("%02x", b[i + j]);
			j++;
			printf("%02x ", b[i + j]);
			j++;
		}
		while (j < 10)
		{
			printf("  ");
			j++;
		}
		j = 0;
		while (j < 10 && i + j < size)
		{
			if (b[i + j] >= ' ' && b[i + j] <= '~')
				printf("%c", b[i + j]);
			else
				printf(".");
			j++;
		}
		printf("\n");
		i += 10;
	}
}
