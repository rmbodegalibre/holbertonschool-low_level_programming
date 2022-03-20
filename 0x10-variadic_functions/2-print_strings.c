#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string that is printed between strings
 * @n: number of arguments
 * @...: Arguments containing the strings to print.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;
	char *ptstr;

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
	ptstr = va_arg(args, char *);

	if (ptstr == NULL)
	printf("(nil)");
	else
	printf("%s", ptstr);

	if (idx != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
