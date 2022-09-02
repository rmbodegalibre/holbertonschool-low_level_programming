#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: is the hash table that is queried
 * @key: This is the key that is sought
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];

	if (new == NULL)
		return (NULL);

	while (strcmp(new->key, key) != 0)
		new = new->next;

	if (new == NULL)
		return (NULL);

	return (new->value);
}
