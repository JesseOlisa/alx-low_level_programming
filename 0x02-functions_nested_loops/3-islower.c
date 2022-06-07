#include "main.h"

/**
 * _islower - is a function that prints 1 if the alphabet is lowercase
 *
 * @c: parameter for letters
 *
 * Return: Always 1 if program is successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
