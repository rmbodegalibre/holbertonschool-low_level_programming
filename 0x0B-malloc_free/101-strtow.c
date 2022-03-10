#include "main.h"
#include <stdlib.h>

int _strlen(char *str);
int _cntwords(char *str);
char **strtow(char *str);

/**
 * _strlen - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int _strlen(char *str)
{
	int idx = 0, len = 0;

	while (*(str + idx) && *(str + idx) != ' ')
	{
	len++;
	idx++;
	}

	return (len);
}

/**
 * _cntwords - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int _cntwords(char *str)
{
	int idx = 0, words = 0, len = 0;

	for (idx = 0; *(str + idx); idx++)
	len++;

	for (idx = 0; idx < len; idx++)
	{
	if (*(str + idx) != ' ')
	{
	words++;
	idx += _strlen(str + idx);
	}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: String to be split.
 *
 * Return: NULL If str == NULL OR str == "", OR the function fails
 *          Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int idx = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
	return (NULL);

	words = _cntwords(str);
	if (words == 0)
	return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
	return (NULL);

	for (w = 0; w < words; w++)
	{
	while (str[idx] == ' ')
	idx++;

	letters = _strlen(str + idx);

	strings[w] = malloc(sizeof(char) * (letters + 1));

	if (strings[w] == NULL)
	{

	for (; w >= 0; w--)
	free(strings[w]);

	free(strings);
	return (NULL);
	}

	for (l = 0; l < letters; l++)
	strings[w][l] = str[idx++];

	strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
