#include "list.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = h->prev;
	node->prev = NULL;
	*head = node;

	return (node);
}
