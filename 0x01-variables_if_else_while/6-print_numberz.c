#include <stdio.h>
/**
 * main - main program
 * Description: Print the numbers from 0 to 10
 * I don't allow to use char.
 * I'm allowed to use putchar
 * I'm allowed to use putchar twicw.
 * Return: 0
 */
int main(void)
{
	int i;
		for (i = 0; i < 10; i++)
		{
		putchar(i + '0');
		}
		putchar('\n');
		return (0);
}
