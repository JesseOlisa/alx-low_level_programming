#include "main.h"

/**
 * _strncpy - this function copies a string
 *
 * @dest: parameter to concat to
 * @src: patameter to be concat'd
 * @n: patameter of the number of bytes from src to add to dest
 *
 * Return: copied dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
