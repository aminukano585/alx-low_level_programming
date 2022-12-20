#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: hex numbers from 0 to f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p;

	for (n = 48; n < 58; n++)
		putchar(n);

	for (p = 97; p < 103; p++)
		putchar(p);

	putchar(10);
	return (0);
}
