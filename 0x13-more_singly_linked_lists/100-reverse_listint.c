#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 *
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list or NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *ptr = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		ptr = node->next;
		node->next = *head;
		*head = node;
		node = ptr;
	}
	return (*head);
}
