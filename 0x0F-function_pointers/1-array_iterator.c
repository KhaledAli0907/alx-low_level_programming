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
	int i = 0;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
