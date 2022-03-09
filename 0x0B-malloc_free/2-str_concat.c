#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: string
 * @s2: string.
 * Return: Returns a pointer to a newly allocated space in memory
 *         containing the content of s1 followed by the content of s2
 *         and terminated in NULL
 *         if NULL is passed, treat it as an empty string
 *         The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int idx, concat_idx = 0, len = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (idx = 0; s1[idx] || s2[idx]; idx++)
	len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
	return (NULL);

	for (idx = 0; s1[idx]; idx++)
	concat_str[concat_idx++] = s1[idx];

	for (idx = 0; s2[idx]; idx++)
	concat_str[concat_idx++] = s2[idx];

	return (concat_str);
}
