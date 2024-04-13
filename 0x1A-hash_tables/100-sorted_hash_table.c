#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		sht->array[i] = NULL;
	}

	sht->size = size;
	return (sht);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *curr, *prev = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = value;
			return (1);
		}
		prev = curr;
		curr = curr->next;
	}

	new_node = create__s_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	if (prev == NULL)
}
char *shash_table_get(const shash_table_t *ht, const char *key)
{
}
void shash_table_print(const shash_table_t *ht)
{
}
void shash_table_print_rev(const shash_table_t *ht)
{
}

void shash_table_delete(shash_table_t *ht)
{
}

shash_node_t *create__s_hash_node(const char *key, const char *value)
{
	shash_node_t *item = malloc(sizeof(shash_node_t));
	if (item == NULL)
		return (NULL);

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
