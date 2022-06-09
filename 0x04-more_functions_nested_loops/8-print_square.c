#include "main.h"

/**
 * print_square- this function prints - diagonally
 *
 * Return: 0 if it is digit
 *
 */

void print_square(int size)
{
	int i;

	while (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			i = i + 1;
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}