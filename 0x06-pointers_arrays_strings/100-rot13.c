#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @sour: string to encode
 * Return: string encoded
 **/

char *rot13(char *sour)
{
	char rt[] = {"NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm"};

	int i;

	for (i = 0; sour[i] != '\0'; i++)
	{
		if (sour[i] >= 'A' && sour[i] <= 'z')
			sour[i] = rt[sour[i] - 'A'];
	}
	return (sour);
}
