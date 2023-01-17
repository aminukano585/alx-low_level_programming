#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long prev, nxt;

	prev = 1;
	nxt = 2;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, %ld", prev, nxt);

		prev += nxt;
		nxt += prev;

		if (i < 48)
			printf(", ");
	}

	printf("\n");
	return (0);
}
