#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: pointer to the list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *arrow = h;

	if (arrow == NULL)
		return (0);

	while (arrow != NULL)
	{
		n++;
		if (arrow->str != NULL)
			printf("[%i] %s\n", arrow->len, arrow->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		arrow = arrow->next;
	}

	return (n);
}
