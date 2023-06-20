#include "main.h"

/**
 * main - check the code.
 *
 *_islower - Returns 1 if c is lowercase
 *
 * Return: Always 0.
 */


int _islower(int c)
{
char x = (char)c;
if (x >= 'a' && x <= 'z')
{
return (1);
}
return (0);
}
