#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: parameter
 * Return: int (1) if n is positive, etc
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
