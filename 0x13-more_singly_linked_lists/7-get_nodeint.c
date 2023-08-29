#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a linked list
 *
 * @head: pointer to the first node
 * @index: the node's index
 *
 * Return: pointer the the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	for (i = 0; i < index; i++)
		node = node->next;

	return (node);
}
