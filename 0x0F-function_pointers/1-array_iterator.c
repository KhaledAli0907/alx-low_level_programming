#include <stddef.h>

/**
 * array_iterator - executes a function on each element
 *
 * @array: array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
