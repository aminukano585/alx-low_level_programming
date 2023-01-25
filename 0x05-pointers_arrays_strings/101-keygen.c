#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SUM 2772

/**
 * main - generates random password
 *
 * Return: 0 Always success
 */
int main(void)
{
	int s, n, i;
	char str[100];

	s = n = i = 0;

	srand(time(NULL));

	while (s < SUM)
	{
		if (SUM - s < 48)
		{
			s -= str[--i];
		}
		else if (SUM - s <= 126)
		{
			n = SUM - s;
		}
		else
		{
			n = rand() % (126 - 48) + 48;
		}

		if (n)
		{
			str[i++] = n;
			s += n;
		}

		n = 0;
	}

	str[i] = '\0';
	printf("%s", str);
	return (0);
}
