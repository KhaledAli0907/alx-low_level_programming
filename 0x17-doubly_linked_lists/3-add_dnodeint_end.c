#include "lists.h"

/**
 * add_dnodeint_end - add a node in the end of a list
 *
 * @head: pointer to the head of list
 * @n: elemnt to be added to the newly created node
 *
 * Return: pointer to the created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *temp = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;

		node->prev = temp;
		temp->next = node;
	}
	else
	{
		*head = node;
		node->prev = NULL;
	}
	return (node);
}
