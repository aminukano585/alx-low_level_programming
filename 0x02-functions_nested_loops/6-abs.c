#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: parameter
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
