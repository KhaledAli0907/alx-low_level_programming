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
	int i = 0;
	char *strcp;

	if (str == NULL)
		return (NULL);

	strcp = malloc(sizeof(char) * (strlen(str) + 1));


	if (strcp == NULL)
		return (NULL);

	for (; i < (int) strlen(str); i++)
		strcp[i] = str[i];

	return (strcp);
}
