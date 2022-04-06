#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *chk = (char *)&num;

	if (*chk)
		return (1);
	else
		return (0);
}
