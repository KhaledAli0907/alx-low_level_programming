#include "lists.h"

/**
 * dlistint_len - get the number of elments
 *
 * @h: header
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
