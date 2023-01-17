#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci numbers below 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	long prev, nxt, sum;

	prev = 1;
	nxt = 2;
	sum = 0;

	while (prev < 4000000)
	{
		if (prev % 2 == 0)
			sum += prev;

		if (nxt % 2 == 0)
			sum += nxt;

		prev += nxt;
		nxt += prev;
	}

	printf("%ld\n", sum);
	return (0);
}
