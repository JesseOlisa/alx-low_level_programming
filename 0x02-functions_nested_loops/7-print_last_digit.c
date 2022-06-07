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
		_putchar(r + '0');
	}
	else
	{
		r = n % 10;
		return (r);
		_putchar(r + '0');
	}

}
