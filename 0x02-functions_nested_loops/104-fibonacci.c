#include <stdio.h>

/**
 * main - print fibonacci numbers
 * Description - a program that prints the first 98 numbers
 * starting with 1 and 2
 * Return: 0
*/

int main(void)
{
	unsigned long int b, c, d, c1, c2, d1, d2;

	c = 1;
	d = 2;

	printf("%lu", c);

	for (b = 1; b < 91; b++)
	{
		printf(", %lu", d);
		d = d + c;
		c = d - c;
	}
	c1 = c / 1000000000;
	c2 = c % 1000000000;
	d1 = d / 1000000000;
	d2 = d % 1000000000;

	for (b = 92; b < 99; ++b)
	{
		printf(", %lu", d1 + (d2 / 10000000000));
		printf("%lu", d2 % 1000000000);
		d1 = d1 + c1;
		c1 = d1 - c1;
		d2 = d2 + c2;
		c2 = d2 - c2;
	}
	printf("\n");
return (0);
}
