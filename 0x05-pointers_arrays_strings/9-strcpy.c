#include "main.h"
#include <stdio.h>

/**
* *_strcpy - function that copies the string pointed to by src
* @dest: pointer to char
* @src: pointer to char
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int n, p;

	n = p = 0;

	for ( ; *(src + n) != '\0'; n++)
		;

	for ( ; p < n; p++)
		dest[p] = src[p];

	dest[n] = '\0';
	return (dest);
}
