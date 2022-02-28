#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: dest char array to copy
 * @src: source char array to copy
 * @n: number of elements to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *rm;

	rm = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (rm);
}
