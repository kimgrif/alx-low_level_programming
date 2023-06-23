#include "main.h"

/**
 * main - isuper
 *
 * _isupper - Returns 1 if c is uppercase
 *            Returns 0 otherwise
 *
 * Return:  (Success)
 */

int _isupper(int c)
{
char x = (char)c;
if (x >= 'A' && x <= 'Z')
{
return (1);
}
return (0);
}
