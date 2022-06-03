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
		num++;
		num = num - 1;
		printf("%d", num);
	} while (num <= 10);

	printf("\n");
	return (0);
}
