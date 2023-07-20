#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
			continue;
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
			continue;
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
			continue;
		}
		else if (i == 100)
			printf("Buzz");

		printf("%d", i);
		putchar(' ');
	}
	putchar('\n');
}
