#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes to copy
 *
 * Return: pointer to newly allocated space containts @s1 followed by\
 * the first @n butes of @s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = strlen(s1), len2 = strlen(s2);
	char *s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
		return (NULL);

	if (n >= len2)
		n = len2;

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	return (s);
}
