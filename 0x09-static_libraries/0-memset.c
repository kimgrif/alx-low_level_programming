#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: starting address of memory area
 * @b: the constant byte
 * @n: bytes of the memory area pointed to by s
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
