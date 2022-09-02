#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table that is queried
 * Return: Nothing
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new, *prev;
	unsigned long int idx, size_2;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (idx = 0, size_2 = ht->size; idx < size_2; idx++)
	{
		new = ht->array[idx];
		while (new)
		{
			prev = new;
			new = new->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}

	free(ht->array);
	free(ht);
}
