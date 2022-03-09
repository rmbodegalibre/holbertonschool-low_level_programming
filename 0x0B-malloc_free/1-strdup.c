#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: NULL If str == NULL
 *         On success, returns a pointer to the duplicated string
 *         NULL If insuficient memory
 */
char *_strdup(char *str)
{
	char *dupli;
	int idx, len = 0;

	if (str == NULL)
		return (NULL);

	for (idx = 0; str[idx]; idx++)
		len++;

	dupli = malloc(sizeof(char) * (len + 1));

	if (dupli == NULL)
		return (NULL);

	for (idx = 0; str[idx]; idx++)
		dupli[idx] = str[idx];

	dupli[len] = '\0';

	return (dupli);
}
