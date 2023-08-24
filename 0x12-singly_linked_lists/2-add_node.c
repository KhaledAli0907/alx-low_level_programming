#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list
 *
 * @head: first node
 * @str: string
 *
 * Return: adress of the new elemnt or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = NULL;
	int len = 0;

	if (head == NULL)
		return (NULL);

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
