#include "main.h"

/**
 * _strcat this concats two strings
 * @dest: parameter to concat to
 * @src: patameter to be concat'd
 *@n: patameter of the number of bytes from src to add to dest
 * return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src, int n)
{
	while (dest != '\0')
		dest++;
	
	int i;

	for (i = 0; i < n && src[i] != '/0'; i++)
	{
		dest = *(src + i);
		dest++;
	}

	dest = '\0';
	return (dest);
}