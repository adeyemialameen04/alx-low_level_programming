#include "hash_tables.h"

/**
 * hash_table_delete - Frees the memory of an ht.
 * @ht: The ht to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			tmp = curr->next;

			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
