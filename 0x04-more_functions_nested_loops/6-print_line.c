#include "main.h"

/**
 * print_line- this function prints a line n times
 *@n: parameter
 * Return: 0 if it is digit
 *
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
