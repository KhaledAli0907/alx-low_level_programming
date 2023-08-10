#include <stdlib.h>

/**
 * _calloc - Allocates memomery for an array using malloc
 *
 * @nmemb: Number of array members
 * @size: Size of the array
 *
 * Return: a pointer to the allocated memomry
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);

	for (; i < (size * nmemb); i++)
		result[i] = 0;
	return (result);
}
