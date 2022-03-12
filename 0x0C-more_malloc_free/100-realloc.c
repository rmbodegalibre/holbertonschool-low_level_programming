#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: Size in bytes of the allocated space for ptr.
 * @new_size: Size in bytes for the new memory block.
 *
 * Return: ptr & not do anything If new_size == old_size
 *         NULL If new_size == 0 and ptr is not NULL
 *         Pointer to the reallocated memory block (otherwise)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptr_dup, *stamp;
	unsigned int idx;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_dup = ptr;
	memory = malloc(sizeof(*ptr_dup) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	stamp = memory;

	for (idx = 0; idx < old_size && idx < new_size; idx++)
		stamp[idx] = *ptr_dup++;

	free(ptr);
	return (memory);
}
