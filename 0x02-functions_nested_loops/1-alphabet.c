#include "main.h"

/**
 * print_alphabet - is a function that prints all alphabet in lower case
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
