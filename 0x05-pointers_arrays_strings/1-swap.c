#include "main.h"

/**
 * swap_int - this function swaps two int pointer
 * @a: first parameter
 * @b: seconnd parameter
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
