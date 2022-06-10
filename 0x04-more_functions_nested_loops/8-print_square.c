#include "main.h"

/**
 * print_square- this function prints - diagonally
 *
 * @size: parameter taken in
 * Return: 0 if it is digit
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
