#include "main.h"

/**
 * _strchr - locates a charater in a string
 * @s: this is the pointer to the str
 * @c: this is a char to find
 *
 * Return: first occurence of a c
 */

char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return s;
	} while (*s++);

	return (0);
}
