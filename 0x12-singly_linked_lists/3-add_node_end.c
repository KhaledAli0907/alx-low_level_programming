#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 *
 * @head: first node
 * @str: string
 *
 * Return: adress of the new elemnt or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = NULL, *new = NULL;
	int len = 0;

	/* get the string's length */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* malloc the new list */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	/* if this is the last elemnt */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	/* while there's other elemnts */
	while (tmp->next != NULL)
		tmp = tmp->next;

	/* insert the new node at the end of the list */
	tmp->next = new;
	return (new);
}
