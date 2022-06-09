#include "main.h"

/**
 * print_diagonal- this function prints diagonally
 *
 * Return: 0 if it is digit
 *
 */

void print_diagonal(int n)
{
	int space = 0;

	while (n > 0)
	{
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		_putchar('\\');
		_putchar('\n')
		space++;
		n--;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
