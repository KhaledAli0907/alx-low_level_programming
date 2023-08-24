#include "lists.h"

/**
 * list_len - prints all elements of a list_t list
 *
 * @h: pointer to the list
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *arrow = h;
	size_t n = 0;

	while (arrow != NULL)
	{
		n++;
		arrow = arrow->next;
	}

	return (n);
}
