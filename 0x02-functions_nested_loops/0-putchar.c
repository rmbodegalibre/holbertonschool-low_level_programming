#include "main.h"
/**
 * main - Program to print "_putchar" followed by a new line.
 * Description: Don't include standard libraries.
 * Return: 0
 */
int main(void)
{
	char car[] = "_putchar";
	int i = 0;

	while (car[i] != '\0')
	{
		_putchar(car[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
