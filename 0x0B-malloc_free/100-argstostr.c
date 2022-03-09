#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program
 * Each argument should be followed by a \n in the new string
 * @ac: number of arguments
 * @av: array of pointers
 *
 * Return: NULL If ac == 0, av == NULL
 * a pointer to a new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, idx, size = ac;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
	for (byte = 0; av[arg][byte]; byte++)
	size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	return (NULL);

	idx = 0;

	for (arg = 0; arg < ac; arg++)
	{
	for (byte = 0; av[arg][byte]; byte++)
	str[idx++] = av[arg][byte];

	str[idx++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
