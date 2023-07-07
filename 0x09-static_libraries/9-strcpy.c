#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @src: Source string to be copied
 * @dest: Destination string to copy into
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i, b = 0;
for (i = 0; src[i] != '\0'; ++i)
{
dest[b] = src[i];
++b;
}
dest[b] = '\0';
return (dest);
}
