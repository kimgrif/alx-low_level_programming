#include "main.h"

/**
 *_isupper - Returns 1 if c is uppercase else returns 0 otherwise
 *@c: The character to be checked
 *Return:  (Success)
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
