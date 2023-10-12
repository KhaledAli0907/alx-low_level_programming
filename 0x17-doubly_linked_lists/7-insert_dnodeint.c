#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a givin position
 *
 * @h: pointer to header
 * @idx: the position
 * @n: the data
 *
 * Return: pointer to the created node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL, *temp = NULL;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL || h == NULL)
		return (NULL);

	node->n = n;
	temp = *h;

	/* if inserted in the 0th posiotion */
	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	node->next = temp->next;
	node->prev = temp;
	temp->next = node;
	return (node);
}
