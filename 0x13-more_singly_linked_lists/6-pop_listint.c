#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 *
 * @head: pointer to head pointer
 *
 * Return: the deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;

	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}
