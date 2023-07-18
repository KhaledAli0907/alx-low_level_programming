#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long i, j, sum, x;
	
	i = 1;
	j = 2;
	sum = 0;
	x = 0;

	while (j < 4000000)
	{
		if ((j % 2) == 0)
			sum += j;
		
		x = i + j;
		i = j;
		j = x;
	}
	printf("%lu\n", sum);
	return (0);
}
