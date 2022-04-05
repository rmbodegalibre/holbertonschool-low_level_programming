#include "main.h"
/**
 * print_binary - converts a decimal number to a binary number
 * @n: input decimal number
 * Return: binary representation of a number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
      	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
