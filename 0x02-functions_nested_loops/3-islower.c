#include "main.h"
/**
 * _islower - program than that checks for lowercase character
 * @c: is the input variabl8e
 * Only use _putchar
 * Return: 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
