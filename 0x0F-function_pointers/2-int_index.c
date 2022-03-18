#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array that contains integers
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
	return (-1);

	for (idx = 0; idx < size; idx++)
	{
	if (cmp(array[idx]) != 0)
	return (idx);
	}
	return (-1);
}
