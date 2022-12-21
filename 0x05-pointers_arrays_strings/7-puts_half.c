#include "main.h"

/**
* puts_half - function that prints half of a string
* @str: pointer to char
* Return: void
*/

void puts_half(char *str)
{
	int len, c;

	for (len = 0; str[len] != '\0'; len++)
		;

	c = (len % 2 == 0) ? len / 2 : (len - 1) / 2;

	for (; *(str + c) != '\0'; c++)
		_putchar(str[c]);

	_putchar('\n');
}
