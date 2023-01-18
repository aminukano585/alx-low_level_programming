#include <stdio.h>

/**
 * main - finds a prints the largest prime factor of 612852475143
 *
 * Return: Always (0)
 */
int main(void)
{
	long i, num, largest;

	num = 612852475143;
	largest = 1;

	while (num % 2 == 0)
	{
		num /= 2;
		largest = 2;
	}

	for (i = 3; i <= num / i; i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
			largest = i;
		}
	}

	if (num > 2)
	{
		largest = num;
	}

	printf("%ld\n", largest);
	return (0);
}
