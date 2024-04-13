#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash_table.
 * @ht: The hashtable to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int is_first_element = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			if (is_first_element)
			{
				is_first_element = 0;
			}
			else
			{
				printf(", ");
			}
			printf("'%s': '%s'", curr->key, curr->value);
			curr = curr->next;
		}
	}
	printf("}\n");
}
