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
/**
 * _abs - computes the absolute value of an integer.
 * @int: Input integer value
 * Return: Value after calculate
 */
int _abs(int);
/**
 * print_last_digit - prints the last digit of a number
 * @int: Input integer value
 * Return: Value after calculate
 */
int print_last_digit(int);
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Value after calculate
 */
void jack_bauer(void);
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Value after calculate
 */
void times_table(void);
/**
 * add -  adds two integers and returns the result.
 * @int: Input integer value
 * Return: Value after calculate
 */
int add(int, int);
/**
 * print_to_98 - prints all natural numbers from n to 98,followed by a new line
 * @n: The character to print
 * Return: Value after calculate
 */
void print_to_98(int n);
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The character to print
 * Return: Value after calculate
 */
void print_times_table(int n);
#endif
