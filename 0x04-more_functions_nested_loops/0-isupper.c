#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character variable
 *
 * Return: Always 0 (lowercase), 1 (uppercase)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
