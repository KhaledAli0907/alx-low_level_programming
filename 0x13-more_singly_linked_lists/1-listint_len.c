#include "lists.h"

/**
 * listint_len - get the number of elements in a linked list
 *
 * @h: header node
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
