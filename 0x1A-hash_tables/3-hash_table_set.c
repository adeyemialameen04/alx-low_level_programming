#include "hash_tables.h"

/**
 * create_hash_node - Creates a neq hash node.
 * @key: The key.
 * @value: The value.
 * @new_node: Where the node is going to be stored.
 * Return: hash_node_t.
 */
int create_hash_node(const char *key, const char *value,
					 hash_node_t **new_node)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
	{
		return (0);
	}

	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}

	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}

	item->next = NULL;
	*new_node = item;
	return (1);
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
	hash_node_t *hash_node, *curr_hash_node;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	curr_hash_node = ht->array[index];
	while (curr_hash_node != NULL)
	{
		if (strcmp(curr_hash_node->key, key) == 0)
		{
			free(curr_hash_node->value);
			curr_hash_node->value = strdup(value);
			return (1);
		}
		curr_hash_node = curr_hash_node->next;
	}

	if (!create_hash_node(key, value, &hash_node))
		return (0);

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
