#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Always 1 if program is successful
 */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j;
		int tb;

		for (j = 0; j <= 9; j++)
		{
			tb = j * i;

			if (tb > 9)
			{
				_putchar(' ');
				_putchar((tb / 10) + '0');/*This removes last d*/
				_putchar((tb % 10) + '0');/*This prints last d*/
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(tb + '0');
			}
			else
			{
				_putchar(tb + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
		i++;
	}
}
