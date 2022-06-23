#include "main.h"

/**
 * _pow_recursion - Performs power operation on two numbers using recursion.
 *
 * @x: params to be raised by.
 * @y: params to be raised to.
 *
 * Return: a number.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
