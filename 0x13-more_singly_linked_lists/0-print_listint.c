#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements of a listint_t list
 *
 * @h : header
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	while (h != NULL)
	{
		n++;
		if (h->n)
			printf("%i\n", h->n);
		else
			printf("%i\n", 0);
		h = h->next;
	}
	return (n);
}
