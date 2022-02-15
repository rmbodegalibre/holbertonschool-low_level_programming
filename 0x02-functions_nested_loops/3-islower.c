#include "main.h"
int _islower(int c);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
 * _islower - program than that checks for lowercase character
 * @c: is the input variable
 * Only use _putchar
 * Return: 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
