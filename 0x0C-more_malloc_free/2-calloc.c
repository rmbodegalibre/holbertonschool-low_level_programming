#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an arrayof nmemb elements
 *           of size bytes each
 * @nmemb: The number of elements.
 * @size: Size in bytes of each array element
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *stamp;
	unsigned int idx;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	stamp = memory;

	for (idx = 0; idx < (size * nmemb); idx++)
		stamp[idx] = '\0';

	return (memory);
}
