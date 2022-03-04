#include "main.h"

int _strlen(char *s);
int check_pal(char *s, int len, int idx);
int is_palindrome(char *s);

/**
 * _strlen - length of a string.
 * @s: The string
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}

/**
 * check_pal - Checks a palindrome
 * @s: The string
 * @len: The length of s.
 * @idx: The index
 *
 * Return: If the string is palindrome - 1
 *         If the string is not palindrome - 0
 */
int check_pal(char *s, int len, int idx)
{
	if (s[idx] == s[len / 2])
		return (1);

	if (s[idx] == s[len - idx - 1])
		return (check_pal(s, len, idx + 1));

	return (0);
}

/**
 * is_palindrome - Checks a palindrome
 * @s: The string
 *
 * Return: 1 If the string is palindrome
 *         0 If the string is not palindrome
 */
int is_palindrome(char *s)
{
	int idx = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_pal(s, len, idx));
}
