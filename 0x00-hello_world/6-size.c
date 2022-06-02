#include <stdio.h>

/**
 * main - This is the function entry point
 *
 * Return: 0 if code is a success
*/
int main(void)
{
    printf("Size of a Char: %d byte(s)", sizeof(char));
    printf("Size of an int: %d byte(s)", sizeof(int));
    printf("Size of a long int: %d byte(s)", sizeof(long int));
    printf("Size of a long long int: %d byte(s)", sizeof(long long int));
    printf("Size of a float: %d byte(s)", sizeof(float));

    return (0);
}