#include "main.h"

/**
 *_isdigit - Returns 1 if c is digit else returns 0
 *@c: The character to be checked
 *Return:  (Success)
*/

int _isdigit(int c)
{
if (c >= 0 || c <= 9)
{
return (1);
}
return (0);
}
