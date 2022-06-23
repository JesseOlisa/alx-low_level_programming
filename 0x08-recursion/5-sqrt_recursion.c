#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: parameter
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: parameters
 * @i: integer parameters
 * Return: square root
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
