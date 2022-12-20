#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: combination of two digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p;

	for (n = 48; n < 57; n++)
	{
		for (p = n + 1; p < 58; p++)
		{
			putchar(n);
			putchar(p);

			if (n != 56 || p != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
