#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a givin position
 *
 * @head: pointer to first node
 * @idx: the position
 * @n: node data
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *node = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = new;
		*head = node;
		return (node);
	}
	/* go to the desired position */
	for (i = 0; i < (idx - 1); i++)
	{
		if (new == NULL || new->next == NULL)
			return (NULL);
		new = new->next;
	}
	node->next = new->next;
	new->next = node;
	return (node);
}
