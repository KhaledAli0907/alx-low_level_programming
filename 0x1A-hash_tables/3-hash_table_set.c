#include "hash_tables.h"

/**
 * create_node - Creates new node
 *
 * @key: node key
 * @value: hash value
 *
 * Return: pointer to the new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	return (node);
}

/**
 * hash_table_set - adds an elemnts to the hash table
 *
 * @ht: hash table
 * @key: the string key
 * @value: hash value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *temp = NULL;
	unsigned long int index = 0;
	char *new = NULL;

	if (key == NULL || ht == NULL || ht->array == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			new = strdup(temp->value);
			if (new == NULL)
				return (0);
			free(temp->value);
			temp->value = new;
			return (1);
		}
		temp = temp->next;
	}
	node = create_node(key, value);
	if (node == NULL)
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
