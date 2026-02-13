#include <stdio.h>

/**
 * main - prints all single digit numbers
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
		putchar(n++ + 48);
	putchar('\n');

	return (0);
}
