#include "main.h"

/**
 * _isalpha - returns 1 if the alphabet is lowercase or uppercase
 *
 * @c: parameter for letters
 *
 * Return: Always 1 if program is successful
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
