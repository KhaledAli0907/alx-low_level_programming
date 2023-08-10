#include <stdlib.h>

/**
 * array_range - Creates an array of ints
 *
 * @min: the floor number
 * @max: the cileing number
 *
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *result = 0;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));
	if (!result)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		result[i] = min;
		min++;
	}
	return (result);
}
