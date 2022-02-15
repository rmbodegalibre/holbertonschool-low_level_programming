#ifndef _main_h_
#define _main_h_
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * print_alphabet - Print alphabet one time
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - Print alphabet ten times followed by new line
 */
void print_alphabet_x10(void);
#endif
