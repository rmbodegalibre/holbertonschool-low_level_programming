#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: Number of arguments
 * @argv: Array that contain arguments
 * Description: adds positive numbers
 * Return: 0 If no number is passed to the program
 * Print "Error" nd return 1 If any data is not a digit
 * All results followed by a new line
 */

int main(int argc, char *argv[])
{

	int sum, num, i;
	char *p;

	sum = 0;
	if (argc > 1)
	{

	for (i = 1; argv[i]; i++)
	{
	num = strtol(argv[i], &p, 10);
	if (!*p)
	sum += num;
	else
	{
	printf("Error\n");
	return (1);
	}
	}
	}
	printf("%d\n", sum);
	return (0);
}
