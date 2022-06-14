#include "main.h"

/**
 * _strlen - this returns the length of a string
 *
 *@s: string to be counted;
 *
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
