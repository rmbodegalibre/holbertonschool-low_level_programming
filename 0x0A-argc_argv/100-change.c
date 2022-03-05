#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: Number of arguments
 * @argv: Array that contain arguments
 * Description: prints the minimum number of coins
 *               to make change for an amount of money
 * Return: 1 If arguments is more than one
 *         0 Otherwise
 * Print "Error" nd return 1 If any data is not a digit
 * All results followed by a new line
 */

int main(int argc, char *argv[])
{

	int amount, coins = 0;

	if (argc != 2)
	{

		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

			while (amount > 0)
			{
			coins++;
			if ((amount - 25) >= 0)
			{
			amount -= 25;
			continue;
			}
			if ((amount - 10) >= 0)
			{
			amount -= 10;
			continue;
			}
			if ((amount - 5) >= 0)
			{
			amount -= 5;
			continue;
			}
			if ((amount - 2) >= 0)
			{
			amount -= 2;
			continue;
			}
			amount--;
			}
	printf("%d\n", coins);

	return (0);
}
