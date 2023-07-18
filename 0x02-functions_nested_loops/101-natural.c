#include "main.h"
#include <stdio.h>

/**
* natural - Entry point
*
* Return: void
*/

void natural(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	printf("%i", sum);
}
