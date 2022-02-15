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
/**
 * _islower - checks for lowercase character.
 * @c: The character to print
 * Return: 1 if letter is lowcase else 0
 */
int _islower(int c);
/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to print
 * Return: 1 if character is alphabetic else 0
 */
int _isalpha(int c);
/**
 * print_sign - prints the sign of a number.
 * @n: The character to print
 * Return: 1 and + if n>0, 0 and 0 if n=0, -1 and - if n<0
 */
int print_sign(int n);
#endif
