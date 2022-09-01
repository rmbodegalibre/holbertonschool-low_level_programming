#include "hash_tables.h"

/**
 * hash_table_create - Function used to create a hash table
 * @size: This is the size of array
 * Return: Pointer to Hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htab;

	htab = malloc(sizeof(hash_table_t));

	if (!htab)
		return (NULL);
	if (size == 0)
		return (htab);
	htab->array = malloc(sizeof(hash_node_t *) * size);

	if (!htab->array)
		return (NULL);
	htab->size = size;

	return (htab);
}
