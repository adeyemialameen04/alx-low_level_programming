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
	hash_node_t *hash_node = create_hash_node(key, value);
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *curr_hash_node = ht->array[index];

	if (curr_hash_node == NULL)
	{
		ht->array[index] = hash_node;
		return (1);
	}
	else
	{
		while (curr_hash_node->next != NULL)
		{
			if (strcmp(curr_hash_node->key, key) == 0)
			{
				free(hash_node->key);
				free(hash_node->value);
				free(hash_node);
				strcpy(curr_hash_node->value, value);
				return (1);
			}
			curr_hash_node = curr_hash_node->next;
		}

		if (strcmp(curr_hash_node->key, key) == 0)
		{
			free(hash_node->key);
			free(hash_node->value);
			free(hash_node);
			strcpy(curr_hash_node->value, value);
			return (1);
		}

		curr_hash_node->next = hash_node;
		return (1);
	}
}
