#include <stdlib.h>

/**
 * alloc_grid - writes a 2d array
 *
 * @width: width
 * @height: hight
 *
 * Return: pointer to a 2d array of ints
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			/* free the content of the array */
			while (i >= 0)
				free(array[i--]);

			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
