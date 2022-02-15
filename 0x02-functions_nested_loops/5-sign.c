#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: type int integer, can be negative or positive
 * Description: print the sign of a number.
 * Return: +, 1 if n>0, 0, 0 if n=0, o -,-1 if n<0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
