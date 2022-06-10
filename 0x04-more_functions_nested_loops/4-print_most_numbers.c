#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9
 * expect 2 and 4
 * Return: 0 if function is a successful
 *
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
