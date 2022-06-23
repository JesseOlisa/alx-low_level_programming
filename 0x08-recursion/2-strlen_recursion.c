#include "main.h"

/**
 * _strlen_recursion - to print the length of a given string.
 * @s: String to Find length.
 *
 * Return: a numbet.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(++s));
	else
		return (0);
}
