#include "hash_tables.h"

/**
 * create_hash_node - Creates a neq hash node.
 * @key: The key.
 * @value: The value.
 * Return: hash_node_t.
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t *) * 1);

	if (item == NULL)
	{
		return (NULL);
	}

	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}

	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}

	item->next = NULL;
	return (item);
}

/**
 * hash_table_set - Adds an element in the hash_table.
 * @ht: The hasttable.
 * @key: The key.
 * @value: The value.
 * Return: 0 onSuccess and 1 onFailure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	/* Check for valid input */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Get the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			/* Update the existing value */
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* Add the new node to the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
