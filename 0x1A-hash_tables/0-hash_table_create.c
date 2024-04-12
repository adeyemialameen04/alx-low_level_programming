#include "hash_tables.h"

/**
 * hash_table_create - Creates and returns an empty hash_table.
 * @size: The size of the hash_table.
 * Return: A new hash_table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t) * 1);

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
