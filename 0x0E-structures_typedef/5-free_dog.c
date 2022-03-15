#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: variable to be free
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{

	free(d->name);
	free(d->owner);
	free(d);

	}
}
