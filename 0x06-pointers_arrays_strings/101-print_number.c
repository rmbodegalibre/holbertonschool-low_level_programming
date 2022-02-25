#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Integer printed.
 */
void print_number(int n)
{
	unsigned int itg = n;

	if (n < 0)
	{
		_putchar('-');
		itg = -itg;
	}

	if ((itg / 10) > 0)
		print_number(itg / 10);

	_putchar((itg % 10) + '0');
}
