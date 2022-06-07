#include "main.h"

/**
 * print_alphabet_x10 - is a function that prints all alphabet in lower case ten times
 *
 * Return: Always 0 if program is successful
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char lowerchar;

	while (i <=10)
	{
		for (lowerchar = 'a'; lowerchar <= 'z'; lowerchar++)
		{
		_putchar(lowerchar);
		}
		_putchar('\n');
		i++;
	}
}
