#include "function_pointers.h"

/**
 * print_name - Prints the name.
 * @name: The name.
 * @f: Pointer to the function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
