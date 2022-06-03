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

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'e' || letters == 'q')
		continue;
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
