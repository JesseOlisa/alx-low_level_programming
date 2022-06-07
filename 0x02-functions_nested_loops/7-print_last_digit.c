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
	int lastDgt;

	if (n < 0)
	{
		lastDgt = (n % 10) * (-1);
		return (lastDgt);
		_putchar(lastDgt);
	}
	else
	{
		lastDgt = n % 10;
		return(lastDgt);
		_putchar(lastDgt);
	}

}
