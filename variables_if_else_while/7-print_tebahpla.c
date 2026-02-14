#include <stdio.h>

/**
 * main - prints alphabet in reverse lowercase
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');

	return (0);
}
