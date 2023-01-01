#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: parameter
 * Return: int
 */
int print_last_digit(int n)
{
	int a;
	char x;

	if (n < 0)
	{
		a = n % 10 * -1;
	}
	else
	{
		a = n % 10;
	}

	x = a + '0';
	_putchar(x);
	return (a);
}
