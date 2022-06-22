#include "main.h"

/**
 * _comp - computes the function sqrt to find sq root
 * Description - compute the func sqrt to find sq root
 * @o: int
 * @n: int given
 * Return: to comp sq root
*/

int _comp(int o, int n)
{
	int sq_root;

	sq_root = o * o;

	if (sq_root == n)
	{
	return (o);
	}
	else if (sq_root < n)
	{
		return (_comp(n, ++o));
				}
				return (-1);
}

/**
 * _sqrt_recursion - return the natural sq root
 * Description - a function that returns the natural sq root
 * @n: int
 * Return: natural sq root
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	if (n < 0)
		return (-1);

	return (_comp(n, n));
}
