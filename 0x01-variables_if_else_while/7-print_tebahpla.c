#include <stdio.h>

/**
 * main - Entry point
 *
 * Print: lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 122; n > 96; n--)
		putchar(n);

	putchar(10);
	return (0);
}
