#include <stdlib.h>
#include <time.h>
/* more headers goes there */
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
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNum = n % 10;

	if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastNum);
	}
	else if (lastNum < 5)
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, lastNum);
	}
	printf("Last digit of %d is %d and is 0", n,lastNum);
	
	return (0);
}
