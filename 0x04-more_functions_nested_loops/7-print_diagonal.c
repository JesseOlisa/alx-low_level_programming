#include "main.h"

/**
 * print_diagonal- this function prints diagonally
 * @n: parameter taken
 *
 * Return: 0 if it is digit
 */
void print_diagonal(int n)
{
	int slash, space;

	if (n <= 0)
		_putchar('\n');

	for (slash = 1; slash <= n; slash++)
	{
		for (space = 1; space < slash; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
