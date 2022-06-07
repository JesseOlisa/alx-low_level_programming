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
	int i, j, tb;
	if (n >= 0 && n < 15)
	{
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
				tb = j * i;
				if (tb > 100)
				{
					_putchar(' ');
					_putchar((tb / 100) + '0');
					_putchar((tb / 10) % 10 + '0');
					_putchar((tb % 10) + '0');
				}
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
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
			i++;
		}
	}
}
