#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; alphabet[i] != '\0'; i++)
			_putchar(alphabet[i]);

		_putchar('\n');
	}
}
