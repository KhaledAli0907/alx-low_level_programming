#include "lists.h"

/**
 * free_listint - freees a linked list
 *
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
