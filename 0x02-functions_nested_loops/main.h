#include <unistd.h>
void print_alphabet(void);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
