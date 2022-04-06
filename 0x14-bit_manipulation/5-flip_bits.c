#include "main.h"
/**
 * flip_bits - returns the number of bits thath I need
 * to flip to get from one number to another
 * @n: first input value
 * @m: second input valu
 * Return: Quantity of bits needed to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int qtty = 0;
	unsigned int flip;

	flip = n ^ m;
	while (flip)
	{
	qtty = qtty + (flip & 1);
	flip = flip >> 1;
	}
	return (qtty);
}
