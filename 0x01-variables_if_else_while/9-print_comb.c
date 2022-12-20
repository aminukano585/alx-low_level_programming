#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: combination of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
