#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: parameter for numbers
 *
 * Return: Always 1 if program is successful
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = (n % 10) * (-1);
		return (r);
		_putchar('r');
	}
	else
	{
		lastDgt = n % 10;
		return (r);
		_putchar('r');
	}

}
