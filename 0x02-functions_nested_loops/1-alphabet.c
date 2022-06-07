#include "main.h"

/**
 * main - This is the entry point of the program Prints _putchar
 *
 * This prgram uses the the _putchar too print into the standard output
 * Return: Always 0 if program is successful
 */

void print_alphabet(void)
{
	char lowerchar;
	for (lowerchar = 'a'; lowerchar <= 'z'; lowerchar++){
		_putchar(lowerchar);
	}
	_putchar('\n');
}