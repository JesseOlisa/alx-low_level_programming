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
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (j != 56 && j != 57)
				{
					putchar(',');
					putchar(' ');
				}
				
			}
	}
	putchar('\n');
	return (0);
}
