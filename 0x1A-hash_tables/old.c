#include "hash_tables.h"

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *curr, *prev = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/*Check if key already exists*/
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			return (1);
		}
		curr = curr->next;
	}

	/*Create a new node*/
	new_node = create_s_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	/*Insert into the hash table array*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/*Insert into the sorted linked list*/
	curr = ht->shead;
	while (curr != NULL && strcmp(curr->key, key) < 0)
	{
		prev = curr;
		curr = curr->snext;
	}

	if (prev == NULL)
	{
		/*Insert at the beginning of the list*/
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		/*Insert after 'prev'*/
		new_node->sprev = prev;
		new_node->snext = prev->snext;
		if (prev->snext != NULL)
			prev->snext->sprev = new_node;
		prev->snext = new_node;
	}

	/*Update tail if necessary*/
	if (new_node->snext == NULL)
		ht->stail = new_node;

	return (1);
}
