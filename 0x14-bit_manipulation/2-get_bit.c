#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: is a decimal number
 * @index: location of bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;
	int idx;

	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
	if (n == 0 && index == 0)
	{
	idx = 0;
	return (idx);
	}
	for (len = 0; n; len++)
	{
	if (len == index)
	{
	idx = n & 1;
	return (idx);
	}
	n = n >> 1;
	}
	if (n == 0)
	{
	idx = 0;
	}
	return (idx);
}
