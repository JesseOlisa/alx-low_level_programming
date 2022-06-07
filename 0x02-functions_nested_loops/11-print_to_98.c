#include "main.h"

/**
 * print_to_98 - prints values to 98
 *
 * @n: parameter value
 * Return: 0 if successful
 */

void print_to_98(int n)
{
	if (n < 98) {
		while (n <= 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else 
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}