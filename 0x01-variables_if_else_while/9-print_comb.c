#include <stdio.h>
/**
 * main - main program
 * Description: Print the possible combinations for numbers fron 0 to 9
 * Numbers must be separated by commas and a space.
 * I'm allowed to use only putchar
 * I'm allowed to use only putchar four times.
 * I'm not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;
		while (i < 10)
		{
		putchar(i + '0');
		if (i < 9)
		{
		putchar(44);
		putchar(32);
		}
		i++;
		}
		putchar('\n');
		return (0);
}
