#include "main.h"

/**
 * _isdigit - this function ckecks whether a parameter is
 * a digit
 * @c: is the parameter
 * Return: 1 if it is digit
 *
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
