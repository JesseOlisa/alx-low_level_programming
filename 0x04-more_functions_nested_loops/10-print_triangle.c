#include "main.h"

/**
 * print_triangle- this function prints diagonally
 *
 * @size: parameter for row number
 * Return: 0 if it is true
 *
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('*');
		}
		_putchar("\n");
	}
}
