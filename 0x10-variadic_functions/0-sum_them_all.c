#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int idx, suma = 0;

	va_start(args, n);
	if (n != 0)
	{
	for (idx = 0; idx < n; idx++)
	{
	suma = va_arg(args, int) + suma;
	}
	va_end(args);
	return (suma);
	}
	return (0);
}
