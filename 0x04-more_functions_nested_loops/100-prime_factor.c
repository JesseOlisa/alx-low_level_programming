#include <stdio.h>
/**
 * main - entry point of function
 *
 * this program prints the largest prime number of  a number
 * Return: Always 0 if program is successful
 */

int main(void)
{
	int i;

	long int num = 612852475143;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			continue;
		}
		else {
			return (i);
		}
	}
	printf("%d\n", i);
}
