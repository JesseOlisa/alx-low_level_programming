#include <stdio.h>

/**
 * main - This is the function entry point
 *
 * This program checks for positive and negative numbers
 *
 * Return: 0 if code is a success
*/

int main(void)
{
	char letters;
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');

	return (0);
}
