#include "main.h"

/**
 * print_times_table - prints n times table
 *
 * @n: times number
 *
 * Return: Always 1 if program is successful
 */

void print_times_table(int n)
{
	int i = 0;

	if (n > 15 || n < 0)
	{
		return;
	}

	while (i <= n)
	{
		int j;
		int tb;

		for (j = 0; j <= n; j++)
		{
			tb = j * i;
			if (tb > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((tb / 10) + '0');/*This removes last d*/
				_putchar((tb % 10) + '0');/*This prints last d*/
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(tb + '0');
			}
			else
			{
				_putchar(tb + '0');
			}
			if (j != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
		i++;
	}
}
