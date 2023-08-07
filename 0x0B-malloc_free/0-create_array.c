#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *
 * @size: size of the array
 * @c: the first char
 *
 * Return: pointer to the array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *s = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (; i < size; i++)
		s[i] = c;

	return (s);
}
