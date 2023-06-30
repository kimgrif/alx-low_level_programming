#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}