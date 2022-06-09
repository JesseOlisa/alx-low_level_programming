#include <stdio.h>
/**
 * main - entry point of function
 *
 *
 * Return: Always 0 if program is successful
 */

int main(void)
{
	int i = 0;

	while (i < 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else 
		{
			printf("%d", i);
		}
		i++;
	}
	printf("Buzz\n");
	return (0);
}
