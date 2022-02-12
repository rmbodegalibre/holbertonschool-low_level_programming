#include <stdio.h>
/**
* main - main program
* Description: Print all possible combinations between the digits from 1 to 9.
* Numbers must be separated by a comma and space.
* Print only the smallest combination between two similar ones.
* The order must be ascending.
* You can only use putchar up to 5 times.
* I am not allowed to use variables of type char.
* Return: 0
*/
int main(void)
{
	int x, y, z;
		x = 0;
		while (x < 100)
		{
		y = x % 10; /* singles digit */
		z = x / 10; /* doubles digit */
		if (z < y)
		{
		putchar(z + '0');
		putchar(y + '0');
		if (x < 89)
		{
		putchar(44);
		putchar(32);
		}
		}
		x++;
		}
		putchar('\n');
		return (0);
}
