#include "main.h"

/**
* print_rev - function that prints a string in reverse followed by newline
* @s: pointer to char
* Return: void
*/

void print_rev(char *s)
{
	int len, c;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (c = len - 1; c >= 0; c--)
		_putchar(s[c]);

	_putchar('\n');
}
