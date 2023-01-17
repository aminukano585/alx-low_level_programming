#include <stdio.h>

/**
 * main - Computes and prints the sum of natural numbers below 1024
 * that are multiples of 3 or 5
 *
 * Return: Always 0
 */
int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}

	printf("%d\n", sum);
	return (0);
}
