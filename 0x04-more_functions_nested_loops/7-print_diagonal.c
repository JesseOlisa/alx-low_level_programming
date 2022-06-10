#include "main.h"

/**
 * print_diagonal- this function prints diagonally
 *
 * Return: 0 if it is digit
 *
 */

void print_diagonal(int n)
{
	int slash, space;

	for (slash = 0; slash < n; slash++)
	{
		for(space = 0; space <= slash; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
