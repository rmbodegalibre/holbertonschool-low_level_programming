#include "main.h"
/**
 * print_alphabet - print alphabet, lowercase, followed by a new line.
 * Only use _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
