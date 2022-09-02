#include "hash_tables.h"

/**
 * key_index - Bring the index of the key
 * @key: This is the key of data
 * @size: This is the size of array where will store key and data
 *
 * Return: Index of key into array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
