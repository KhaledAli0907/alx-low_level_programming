#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 *
 * @head: pointer to header pointer
 * @n: the number to insert
 *
 * Return: the address of the new elments, null otherwise.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = NULL, *temp = NULL;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = end;

	return (end);
}
