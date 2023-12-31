#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
*
* @b: size
*
* Return: pointer to allocated memory, exits with 98 value if there's error
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

