#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string to return in reverse.
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
	else 
		prinf("\n")
}
