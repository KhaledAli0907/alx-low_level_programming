#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a sub string.
*
* @haystack: string.
* @needle: string we want to search for.
*
* Return: A pointer to the beginning of the substring \
* NULL otherwise.
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while ((*first == *second) && (*second != '\0'))
		{
			first++;
			second++;
		}
		if (*second == '\0')
			return (haystack);
	}
	return (NULL);
}
