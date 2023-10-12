#include "lists.h"

/**
 * add_dnodeint - inserts node add the beginning of a list
 *
 * @head: header
 * @n: the element to be added
 *
 * Return: pointer to the newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;

	return (node);
}
