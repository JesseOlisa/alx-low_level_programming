#include "main.h"

/**
 * _strcat this concats two strings
 * @dest: parameter to concat to
 * @src: patameter to be concat'd
 *
 * return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (dest);
}
