#include "main.h"

/**
 * print_numbers - print the numbers 0 - 9 followed by a new line
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
