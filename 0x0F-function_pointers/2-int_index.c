#include <stddef.h>

/**
 * int_index - search for an int
 * @array: array
 * @size: number of elemnts in the array
 * @cmp: function pointer
 *
 * Return: index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
