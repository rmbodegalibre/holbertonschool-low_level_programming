#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input binary number
 * Return: The converted number or 0 if b is NULL, or 0 if b is other char
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int sum = 0;
	int pot = 1;

	if (b == NULL)
	return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
	if (b[len] < 48 || b[len] > 49)
	return (0);
	}

	for (; len > 0; len--)
	{
	if (b[len - 1] == '1')
	sum = sum + pot;
	pot = pot * 2;
	}
	return (sum);
}
