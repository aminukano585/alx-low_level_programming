#include "main.h"

/**
* _puts - function that prints a string followed by newline
* @str: pointer to char
* Return: void
*/

void _puts(char *str)
{
	int c;

	for (c = 0; *(str + c) != '\0'; c++)
		_putchar(str[c]);

	_putchar('\n');
}
