#include "main.h"

/**
 * _strcmp - compare two strings
 * Description - a function that compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: string 1 and string 2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 != '\0' && *s2 != '\0')
		{
			return (0);
		}
		s1++;
		s1++;
	}
	return (*s1 - *s2);
}
