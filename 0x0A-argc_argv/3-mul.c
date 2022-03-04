#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: Number of arguments
 * @argv: Array that contain arguments
 * Description: multiplies two numbers
 * Return: 0 If the program receives two arguments
 *         1 If the program doesn't receive two arguments
 */


int main(int argc, char *argv[])
{
	int m1, m2, pr;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);
	pr = m1 * m2;

	printf("%d\n", pr);

	return (0);
}
