#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: alphabets in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 101 || n == 113)
			continue;

		putchar(n);
	}

	putchar(10);
	return (0);
}
