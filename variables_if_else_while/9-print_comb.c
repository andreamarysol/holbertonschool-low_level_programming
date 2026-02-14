#include <stdio.h>

/**
 * main - prints combinations of single digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');

	return (0);
}
