#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabets
 * Description - prints the alphabet in lowercase
 * Return: 0
*/

int main(void)

{
char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
	putchar(alphabets);
}
for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
{
	putchar(tolower(alphabets));
}

putchar('\n');
return (0);
}
