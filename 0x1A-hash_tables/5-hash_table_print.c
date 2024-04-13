#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash_table.
 * @ht: The hashtable to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int is_first_element = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (is_first_element)
			{
				is_first_element = 0;
			}
			else
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
