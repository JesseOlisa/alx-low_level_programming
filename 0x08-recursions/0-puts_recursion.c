#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: Pointer to string to print.
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf('%c', *s);
		_puts_recursion(s + 1);
	}
}
