#include "main.h"

/**
 * print_line - draw a straight line
 * @n: Quantity of printings
 * Description: Only use _putchar to print
 */
void print_line(int n)
{
int c;

	c = 0;
	while (c < n)
	{
	_putchar('_');

	c++;
	}
	_putchar('\n');
}
