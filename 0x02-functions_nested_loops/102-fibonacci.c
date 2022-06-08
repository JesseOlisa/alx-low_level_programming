#include "main.h"
#include <stdio.h>
/**
 * main - entry point if function
 *
 * This program prints the first 50 finabocci sequences
 * it takes the value of the current number and assigns it to upNums
 * it updates the value of num by assign by adding previous num
 * old num is now assigned the value of previous old num
 * Return: Always 0 if program is successful
 */

int main(void)
{
	long int num, oldNum, upNums;
	int i = 0;

	num = 1;
	oldNum = 1;
	while (i < 49)
	{
		printf("%ld, ", num);
		upNums = num;
		num = num + oldNum;
		oldNum = upNums;
		i++;
	}
	printf("%ld\n", num);
	return (0);
}
