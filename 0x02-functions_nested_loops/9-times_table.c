#include "main.h"

/**
 * jack_bauer - prints time of the day jack bauer wasted
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
				_putchar((tb / 10) + '0'); /*This removes last*/
				_putchar((tb % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(tb + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			// if (j != 9 && tb > 9)
			// {
			// 	_putchar(',');
			// 	_putchar(' ');
			// }
		}
		_putchar('\n');
		i++;
	}
}
