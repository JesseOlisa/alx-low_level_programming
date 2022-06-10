#include "main.h"

/**
 * print_triangle- this function prints diagonally
 *
 * Return: 0 if it is true
 *
 */

void print_triangle(int size)
{
	int space = 0;

	while (size > 0)
	{
		while (space < size)
		{
			_putchar(' ');
			space++;
		}
		_putchar('#');
		_putchar('\n');
		space++;
		size--;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
