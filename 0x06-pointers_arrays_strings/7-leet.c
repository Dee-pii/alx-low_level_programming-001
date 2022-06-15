#include "main.h"

/**
 * leet - encodes a string
 * Description - a function that encodes a string
 * @s: string to be encoded
 * use 'if' only once
 * use only two loops
 * switch and any ternary operation is not allowed
 * Return: string
*/

char *leet(char *s)
{
	int b, c;
	char *d = "aAeEoOtTlL";
	char *e = "4433007711";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (s[b] == d[c])
			{
				s[b] = e[c];
			}
		}
	}
	return (s);
}
