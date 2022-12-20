#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);

	putchar(10);
	return (0);
}
