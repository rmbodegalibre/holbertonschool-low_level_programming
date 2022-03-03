#include "main.h"

/**
 * factorial - return factorial of a given number.
 * @n: int given number
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}

