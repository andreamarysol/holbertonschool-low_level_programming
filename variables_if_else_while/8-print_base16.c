#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
		putchar(n++ + '0');

	n = 0;
	while (n < 6)
		putchar(n++ + 'a');

	putchar('\n');

	return (0);
}
