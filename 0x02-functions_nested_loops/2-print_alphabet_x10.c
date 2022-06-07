#include "main.h"

/**
 * print_alphabet_x10 -  prints all alphabet in lower case ten times
 *
 * Return: Always 0 if program is successful
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char lowerchar;

		for (lowerchar = 'a'; lowerchar <= 'z'; lowerchar++)
		{
			_putchar(lowerchar);
		}
		_putchar('\n');
		i = i + 1;
	}
}
