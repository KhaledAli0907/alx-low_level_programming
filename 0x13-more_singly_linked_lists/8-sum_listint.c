#include "lists.h"

/**
 * sum_listint - sum all the data n in a linked list
 *
 * @head: pointer to the first node
 *
 * Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
