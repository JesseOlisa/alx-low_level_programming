#include "main.h"

/**
 * print_alphabet is a function that prints
 *
 * Return: Always 0 if program is successful
 */

void print_alphabet(void)
{
	char lowerchar;
	for (lowerchar = 'a'; lowerchar <= 'z'; lowerchar++)
	{
		_putchar(lowerchar);
	}
	_putchar('\n');
}
