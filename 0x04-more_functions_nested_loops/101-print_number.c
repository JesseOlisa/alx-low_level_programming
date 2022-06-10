#include "main.h"

/**
 * print_square- this function prints - diagonally
 *
 * @n: parameter taken in
 * Return: 0 if it is digit
 *
 */

void print_number(int n);
{
	/* unsigned int num;*/

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n == 0)
		_putchar('0');

	if (n < 10)
		_putchar((n % 10) + '0')
	else 
	{
		print_number((n / 10));
		_putchar((n % 10) + '0');
	}
}
