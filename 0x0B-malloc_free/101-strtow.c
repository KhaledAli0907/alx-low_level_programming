#include <stdlib.h>

/**
 * strtow - splites a string into words
 *
 * @str: string
 *
 * Return: Pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	char **words = NULL;
	int i = 0, j = 0, count = 0, spaces = 0, len = 0;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		while (str[spaces] == ' ')
			spaces++;

		len = 0;
		while (str[spaces + len] != ' ' && str[spaces + len] != '\0')
			len++;
		if (str[i] == ' ' && str[i + 1] == '\0')
			return (NULL);

		/* try to locate memory for the string */
		words[i] = malloc(sizeof(char) * (len + 1));
		/* free memory if the result is null */
		if (words[i] == NULL)
		{
			while (words[i])
				free(words[i--]);
			free(words);
			return (NULL);
		}
		/* write the bytes to the words array */
		for (j = 0; j < len; j++)
			words[i][j] = str[spaces++];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
