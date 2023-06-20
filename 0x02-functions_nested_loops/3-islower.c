#include "main.h"

/**
* _islower - checks if Returns 1 if 'c' is lowercase
* @c: The character to be checked
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
