#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
int a, i;
a = 0;
while (s[a] != '\0')
{
i = 0;
while (accept[i] != '\0')
{
if (s[a] == accept[i])
return (s + a);
i++;
}
a++;
}
return ('\0');
}
