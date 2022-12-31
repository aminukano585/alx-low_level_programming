#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
		_putchar(alphabet[i]);

	_putchar('\n');
}
