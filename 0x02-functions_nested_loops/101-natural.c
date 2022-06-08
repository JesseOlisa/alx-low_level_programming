#include "main.h"

/**
 * main - entry point if function
 *
 *
 * Return: Always 0 if program is successful
 */

int main(void)
{
	unsigned long int multi3, multi5, sum;
	int i;

	i = 0;
	multi3 = 0;
	multi5 = 0;
	while (i < 1024)
	{
		if (i % 3 == 0)
			multi3 += i;
		else if ( i % 5 == 0)
			multi5 += i;
		i++;
	}
	sum = multi3 + multi5;
	printf("%lu\n", sum);
	return (0);
}

