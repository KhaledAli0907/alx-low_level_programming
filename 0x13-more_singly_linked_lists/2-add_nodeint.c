#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *
 * @head: pointer to header pointer
 * @n: the number to insert
 *
 * return: the address of the new elments, null otherwise.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start = NULL;

	if (head == NULL)
		return (NULL);

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = *head;
	*head = start;

	return (start);
}
