#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and
 *                initializes it with a specific char
 * @size: The size of the array
 * @c: The specific char
 *
 * Return: NULL if size = 0, if it fails NULL
 *         or a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arry;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	arry = malloc(sizeof(char) * size);

	if (arry == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		arry[idx] = c;

	return (arry);
}
