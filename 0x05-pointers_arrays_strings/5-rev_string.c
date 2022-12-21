#include "main.h"

/**
* rev_string - function that reverses a string
* @s: pointer to char
* Return: void
*/

void rev_string(char *s)
{
	int len;
	char *a, *b, tmp;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (a = s, b = s + len - 1; a < b; a++, b--)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}
