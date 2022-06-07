#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints values to 98
 *
 * @n: parameter value
 * Return: 0 if successful
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
