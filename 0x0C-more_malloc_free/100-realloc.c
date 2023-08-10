#include <stdlib.h>

/**
 * _realloc - Relocatesa memory block using malloc and free
 *
 * @ptr: Memory previously allocated with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: A pointer to the newly alocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL, *old = ptr;
	unsigned int i = 0, max = new_size;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		max = old_size;
	/* cp the content of the first pointer */
	for (; i < max; i++)
		p[i] = old[i];
	free(ptr);
	return (p);
}
