#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: Number of arguments
 * @argv: Array that contain arguments
 * Description: Prints all arguments it receives
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
