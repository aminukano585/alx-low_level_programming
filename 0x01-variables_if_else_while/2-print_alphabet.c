#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
		putchar(n);

	putchar(10);
	return (0);
}
