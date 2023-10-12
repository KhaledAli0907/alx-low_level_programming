#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a doubly linked list
 *
 * @head: header
 * @index: the index of the desired node
 *
 * Return: Pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	node = head;
	return (node);
}
