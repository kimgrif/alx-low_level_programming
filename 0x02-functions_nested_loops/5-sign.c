#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Return: 1 if the number is +, 0 if it is 0, -1 if it is -
 */
int print_sign(int n)
{
int a = (int)n;
if (a > 0)
{
_putchar('+');
return (1);
}
else if (a == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
