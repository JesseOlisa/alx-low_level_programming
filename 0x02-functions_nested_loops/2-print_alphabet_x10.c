#include "main.h"

/**
 * print_alphabet_x10 - is a function that prints all alphabet in lower case ten times
 *
 * Return: Always 0 if program is successful
 */

void print_alphabet_x10(void)
{
	char alpha;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);

		_putchar(10);
	}
}
