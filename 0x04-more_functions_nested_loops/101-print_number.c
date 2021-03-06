#include "main.h"

/**
 * print_number- this function prints number
 * @n: parameter taken in
 * Return: 0 if it is digit
 *
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * (-1);
	}
	else
		num = n;

	if (num < 10)
		_putchar((num % 10) + '0');
	else
	{
		print_number(num / 10);
		_putchar((num % 10) + '0');
	}
}
