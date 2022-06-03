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
	int num;

	num = 0;
	do {
		putchar('0' + num); /* This converts num to their ASCII value */
        putchar(',');
        putchar(' ');
		num++;
	} while (num < 10);

	putchar('\n');
	return (0);
}
