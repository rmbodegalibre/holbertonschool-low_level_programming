#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line
 * @s: char array string type
 */

void print_rev(char *s)
{
	int l;

	for (l = 0;s[l] != '\0'; l++);

	while (l > 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
