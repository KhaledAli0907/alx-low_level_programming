#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, sum;
	int arr[50] = {1, 2};

	for (i = 2; i < 50; i++)
	{
		sum = arr[i - 1] + arr[i - 2];
		arr[i] = sum;
	}

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
			printf("%i\n", arr[i]);

		else
			printf("%i, ", arr[i]);
	}
	return (0);
}
