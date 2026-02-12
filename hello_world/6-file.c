#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	{
    printf("Size of a character: %d byte(s)\n", sizeof(char));
    printf("Size of an integer: %d byte(s)\n", sizeof(int));
    printf("Size of a long integer: %d byte(s)\n", sizeof(long int));
    printf("Size of a long long integer: %d byte(s)\n", sizeof(long long int));
    printf("Size of a float: %d byte(s)\n", sizeof(float));

    return 0;
}
