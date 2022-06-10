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

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (j == size - 1)
				break;
			else
				_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('*');
		}
		_putchar('\n');
	}
}
