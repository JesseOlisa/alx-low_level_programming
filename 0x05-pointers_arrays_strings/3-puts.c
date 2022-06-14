#include "main.h"

/**
 *_puts - prints out into the console
 *
 * @str: this is the str parameters
 *
 * Return: the str;
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
