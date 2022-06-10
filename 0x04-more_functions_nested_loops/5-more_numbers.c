#include "main.h"

/**
 * more_numbers- this function prints 0 - 14 x10
 *
 * Return: 0 if it is digit
 *
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 14)
		{
			_putchar((j / 10) + '0');
			if (j > 9)
			{
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
