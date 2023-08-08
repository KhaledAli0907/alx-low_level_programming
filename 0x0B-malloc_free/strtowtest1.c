#include <stdlib.h>
#include <string.h>

int wordcount(char *s);

/**
 * strtow - split string into words
 *
 * @str: string
 *
 * Return: pointer to an array of words
 */
char **strtow(char *str)
{
	int wordscount = 0, i = 0, j = 0, x = 0, y = 0, a = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	if (str[0] == ' ' && str[1] == '\0')
		return (NULL);
	wordscount = wordcount(str);
	if (wordscount == 1)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * wordscount);
	if (words == NULL)
		return (NULL);
	words[wordscount - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] && str[i + j] != ' '; j++);
			j++;
			words[y] = (char *) malloc(sizeof(char) * j);
			j--;
			if (words[y] == NULL)
			{
				for (x = 0; x < wordscount; x++)
					free(words[x]);
				free(words[wordscount - 1]);
				free(words);
				return (NULL);
			}
			for (a = 0; a < j; a++)
				words[y][a] = str[i + 1];
			words[y][a] = '\0';
			y++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}




/**
 * wordcount - counts the words in a string
 *
 * @s: string
 *
 * Return: Number of words
 */
int wordcount(char *s)
{
	int n = 0, i = 0;

	for(i = 0; s[i]; i++)
	{
		if (s[i] != ' ' && (s[i + 1] != ' ' && s[i + 1] != '\0'))
			n++;
		else if (i == 0)
			n++;
	}
	return (++n);
}

