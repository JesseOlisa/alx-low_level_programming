#include "main.h"

/**
 * _strcat this concats two strings
 * @dest: parameter to concat to
 * @src: patameter to be concat'd
 *@n: patameter of the number of bytes from src to add to dest
 * return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *last = dest;
	int i = 0;

	while (*last != '\0')
		last++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*last = *(src + i);
		last++;
	}

	*last = '\0';

	return (dest);
}
