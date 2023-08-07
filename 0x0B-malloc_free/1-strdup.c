#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy a string to newly alocated space in memory
 *
 * @str: string
 *
 * Return: a pointer to the newly allocated space
 */

char *_strdup(char *str)
{
	int i = 0, size = strlen(str);
	char *strcp;

	if (str == NULL)
		return (NULL);

	strcp = malloc(sizeof(char) * (size + 1));

	if (strcp == NULL)
		return (NULL);

	for (; i < size; i++)
		strcp[i] = str[i];

	return (strcp);
}
