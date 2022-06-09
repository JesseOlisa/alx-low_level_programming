#include "main.h"

/**
 * _isupper - this function ckecks whether a letter is
 * in uppercase
 * @c: is input letter
 * Return: 1 if it is uppercase
 *
 */

int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	return (1);
}
