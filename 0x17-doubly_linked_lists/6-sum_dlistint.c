#include "lists.h"

/**
 * sum_dlistint - sum all nthe data (n) in a linked list
 *
 * @head: header
 *
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
