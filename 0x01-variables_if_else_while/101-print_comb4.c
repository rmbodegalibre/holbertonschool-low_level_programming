#include <stdio.h>
/**
* main - main program
* Program to obtain the possible combinations between 3 digits from 1 to 10
* Numbers must be separated by comma and space
* All three digits must be different.
* 012, 120, 102, 021, 201, 210 are considered the same combination
* Show only the minor combination
* Numbers must be ordered in ascending order
* Only putchar function is allowed
* Do not use any other functions (printf, puts, etc.)
* The use of putchar is only allowed up to six times
* Variables of type char are not supported.
* Return: 0
*/
int main(void)

{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */
		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');
			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
