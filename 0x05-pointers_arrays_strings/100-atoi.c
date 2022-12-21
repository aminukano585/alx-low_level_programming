#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _atoi - function that convert a string to an integer
* @s: pointer to char
* Return: int
*/

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s == '+')
		{
			sign = 1;
		}
		else if (isdigit(*s))
		{
			result = result * 10 + (*s - '0');
		}
		else if (result != 0)
		{
			return ((result) * (sign));
		}
		s++;
	}

	return ((result) * (sign));
}
