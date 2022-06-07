#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table that is queried
 *
 * Return: Key value printed in the stdout
 * if ht is NULL, don’t print anything
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int i;
	int alter;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0, alter = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		if (new != NULL)
		{
		if (alter == 1)
			printf(", ");
		printf("'%s': '%s'", new->key, new->value);
		while ((new->next) != NULL)
		{
			printf(", ");
			printf("'%s': '%s'", new->key, new->value);
		}
		alter = 1;

		}
	}
	printf("}\n");
}
