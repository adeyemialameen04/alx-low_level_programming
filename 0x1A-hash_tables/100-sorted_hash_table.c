#include "hash_tables.h"

/**
 * shash_table_create - Create an empty ht.
 * @size: The size of the ht.
 * Return: An empty ht.
 */
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

/**
 * shash_table_set - Sets the element of an ht.
 * @ht: The hasttable.
 * @key: The key.
 * @value: The value.
 * Return: 0 onSuccess and 1 onFailure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *curr;
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
			curr->value = strdup(value);
			return (1);
		}
		curr = curr->next;
	}

	new_node = create_s_hash_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
	}
	else
	{
		curr = ht->shead;
		while (curr != NULL && strcmp(curr->key, key) < 0)
			curr = curr->next;

		if (curr == NULL)
		{
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
			new_node->snext = NULL;
		}
		else if (curr == ht->shead)
		{
			new_node->next = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
			new_node->sprev = NULL;
		}
		else
		{
			new_node->sprev = curr->sprev;
			new_node->snext = curr;
			curr->sprev->snext = new_node;
			curr->sprev = new_node;
		}
	}

	return (1);
}

/**
 * shash_table_get - Gets the value form an ht based on key.
 * @key: The key.
 * @ht: The hash_table.
 * Return: The value if found else NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the hash_table.
 * @ht: The hashtable to be printed.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->shead;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->next;
		if (curr != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash_table.
 * @ht: The hashtable to be printed.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->stail;
	printf("{");

	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
		if (curr != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - Frees the memory of an ht.
 * @ht: The ht to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *curr, *tmp;

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

	curr = ht->shead;
	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->snext;
		free(tmp);
	}

	free(ht->array);
	free(ht);
}

/**
 * create_s_hash_node - Creates a neq hash node.
 * @key: The key.
 * @value: The value.
 * Return: hash_node_t.
 */
shash_node_t *create_s_hash_node(const char *key, const char *value)
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
