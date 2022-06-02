#include <stdio.h>

/**
 * main - This is the function entry point
 *
 * Return: 1 if code is a success
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	fwrite(str, sizeof(char), 59, stderr);

	return (1);
}
