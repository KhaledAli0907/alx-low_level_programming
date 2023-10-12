#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: pointer to header
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
