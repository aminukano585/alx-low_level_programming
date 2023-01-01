#include "main.h"

/**
 * times_table - function that prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (k >= 0 && k < 10)
			{
				if (j != 0)
					_putchar(' ');

				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
		}

		_putchar('\n');
	}
}
