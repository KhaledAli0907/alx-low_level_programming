#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly alocated space conatins the new string/
 * Null otherwise.
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;
	int i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	newstr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);

	while (i < (int) (strlen(s1) + strlen(s2)))
	{
		for (j = 0; j < (int) strlen(s1); j++)
		{
			if (s1[j])
				newstr[i++] = s1[j];
		}
		for (j = 0; j < (int) strlen(s2); j++)
		{
			if (s2[j])
				newstr[i++] = s2[j];
		}
	}
	return (newstr);
}
