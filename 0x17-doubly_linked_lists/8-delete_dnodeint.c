#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node from list
 *
 * @head: pointer to the header node
 * @index: the desired element
 *
 * Return: 1 if it deleted correctly -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur = *head;

	if (cur == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (cur == NULL)
			return (-1);
		cur = cur->next;
	}

	if (cur == *head)
	{
		*head = cur->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		cur->prev->next = cur->next;
		if (cur->next != NULL)
			cur->next->prev = cur->prev;
	}
	free(cur);
	return (1);
}
