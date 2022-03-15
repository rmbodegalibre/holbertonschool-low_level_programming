#include "dog.h"
#include <stdlib.h>
#include <stdio>

/**
 * print_dog - print a struct dog
 * @d: struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: ");
	d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: ");
	d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
