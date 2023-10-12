#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints the content of a linked list
 *
 * @h: pointer to header
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
