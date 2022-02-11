#include <stdio.h>
/**
 * main - main program
 * Description: Print numbers fron 0 to 9 and alphabet from q to g
 * i'm allowed only use putchar tree times.
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
		for (i = 0; i < 10; i++)
		{
		putchar(i + '0');
		}
		for (c = 'a'; c < 'g'; c++)
		{
		putchar(c);
		}
		putchar('\n');
		return (0);
}
