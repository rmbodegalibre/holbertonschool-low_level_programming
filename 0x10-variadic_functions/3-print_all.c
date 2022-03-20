#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function with two parameters
 * @format: char type pointer to string
 *
 * Description: prints anything followed by a new line
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int idx;
	char *ptstr;
	char *ptspace;
	va_list ap;

	va_start(ap, format);
	idx = 0;
	while (format && format[idx])
	{
		ptspace = "";
		if (format[idx + 1])
			ptspace = ", ";
		switch (format[idx])
		{

			case 'c':
				printf("%c%s", va_arg(ap, int), ptspace);
				break;
			case 'e':
				break;

			case 'i':
				printf("%d%s", va_arg(ap, int), ptspace);
				break;

			case 's':
				ptstr = va_arg(ap, char *);
				if (!ptstr || !*ptstr)
					ptstr = "(nil)";
				printf("%s%s", ptstr, ptspace);
				break;
		}
		idx++;
	}
	printf("\n");
}
