#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all argments
 *
 * @ac: number of args
 * @av: array of args
 *
 * Return: pointer to the concatenated args
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, x = 0, len = 0;
	char *arg = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* get the length of the args */
	for (i = 0; i < ac; i++, len++)
		len += strlen(av[i]);

	arg = malloc(sizeof(char) * len + 1);
	if (arg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			/* else copy the char to the string */
			arg[x] = av[i][j];
			x++;
		}
		/* if we get to the null terminator swap with newline */
		arg[x++] = '\n';
	}
	arg[x] = '\0';
	return (arg);
}
