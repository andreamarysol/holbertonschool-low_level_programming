#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 without using char
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
		putchar(n + 48);
	putchar('\n');

	return (0);
}
