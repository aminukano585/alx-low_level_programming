#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: alphabets in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p;

	for (n = 97; n < 123; n++)
		putchar(n);

	for (p = 65; p < 91; p++)
		putchar(p);

	putchar(10);
	return (0);
}
