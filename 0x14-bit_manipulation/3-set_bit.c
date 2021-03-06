#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to an integer number
 * @index: location of bit
 * Return: 1 if it worked, or -1 if an error ocurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
	*n = *n | 1 << index;
	return (1);
}
