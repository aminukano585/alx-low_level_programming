#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: combination of two double-digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p;

	for (n = 0; n < 99; n++)
	{
		for (p = n + 1; p < 100; p++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(32);
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');

			if (n == 98 && p == 99)
				continue;

			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
