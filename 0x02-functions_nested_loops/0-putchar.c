#include "_putchar.c"
/**
 * main - Program to print "_putchar" followed by a new line.
 * Description: Don't include standard libraries.
 * Return: 0
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
