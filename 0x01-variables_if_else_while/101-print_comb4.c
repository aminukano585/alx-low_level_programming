#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: combination of three digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p, k;

	for (n = 48; n < 56; n++)
	{
		for (p = n + 1; p < 57; p++)
		{
			for (k = p + 1; k < 58; k++)
			{
				putchar(n);
				putchar(p);
				putchar(k);

				if (n != 55 || p != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}
