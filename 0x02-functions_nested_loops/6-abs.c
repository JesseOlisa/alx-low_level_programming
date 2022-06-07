#include "main.h"

/**
 * _abs - returns absoulte value of a number
 *
 * @n: parameter for number
 *
 * Return: Always 1 if program is successful
 */
int _abs(int n)
{
	int absValue;

	if (n >= 0)
	{
		absValue = n;
		return (absValue);
	}
	else
	{
		absValue = n * (-1);
		return (absValue);
	}
}
