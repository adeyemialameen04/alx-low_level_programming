#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;
	shash_node_t *curr;

	ht = shash_table_create(1024);
	shash_table_set(ht, "y", "0");
	shash_table_set(ht, "j", "1");
	shash_table_set(ht, "c", "2");
	shash_table_set(ht, "b", "3");
	shash_table_set(ht, "z", "4");
	shash_table_set(ht, "n", "5");
	shash_table_set(ht, "a", "6");
	shash_table_set(ht, "m", "7");

	curr = ht->array[0];
	printf("%s", curr->key);
	shash_table_print(ht);
	return (EXIT_SUCCESS);
}
