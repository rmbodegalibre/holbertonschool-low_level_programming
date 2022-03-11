#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, idx;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx]; idx++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (idx = 0; s1[idx]; idx++)
		concat[len++] = s1[idx];

	for (idx = 0; s2[idx] && idx < n; idx++)
		concat[len++] = s2[idx];

	concat[len] = '\0';

	return (concat);
}
