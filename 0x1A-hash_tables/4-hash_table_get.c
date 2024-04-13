#include "hash_tables.h"

/**
 * hash_table_get - Creates a neq hash node.
 * @key: The key.
 * @ht: The hash_table.
 * Return: The value if found else NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[index];

	if (hash_node == NULL)
		return (NULL);

	return (hash_node->value);
}
