#include "main.h"

/**
 * print_sign - returns 1 if the alphabet is lowercase or uppercase
 *
 * @n: parameter for numbers
 *
 * Return: Always 1 if program is successful
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else {
		_putchar('-');
		return (-1);
	}
}
