#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a certain position
 *
 * @head: pointer to the first node
 * @index: Node's index
 *
 * Return: 1 if it succeeded, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *temp = NULL;
	unsigned int i = 0;

	if (node == NULL)
		return (-1);

	/* delete the first node */
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	/* go to the desired index */
	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);
		node = node->next;
	}

	temp = node->next;
	node->next = temp->next;
	free(temp);
	return (1);
}
