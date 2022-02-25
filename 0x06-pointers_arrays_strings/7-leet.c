#include "main.h"

/**
 * leet - encodes a string into 1337
 * @e: string to encode
 * Description: replace a,e,o,t with 4,3,0,7,1
 * Return: string e
 **/

char *leet(char *e)
{
	int i, j;
	char *rep;

	rep = "aAeEoOtTlL4433007711";

	for (i = 0; e[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (e[i] == rep[j])
				e[i] = rep[j + 10];
		}
	}
	return (e);
}
