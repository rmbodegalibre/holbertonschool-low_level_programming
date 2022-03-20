#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: Number of arguments received by the function.
 * @...: Arguments containing the numbers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;

	va_start(args, n);
	{
	for (idx = 0; idx < n; idx++)
	{
	printf("%d", va_arg(args, int));
	if (separator != NULL && idx != (n - 1))
	printf("%s", separator);
	}
	printf("\n");
	va_end(args);
	}
}
