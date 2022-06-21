#include "main.h"

/**
 * _memcpy - nction copies n bytes from memory area src to memory area dest
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of btyes to copy
 *
 * Return: copied dest value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
