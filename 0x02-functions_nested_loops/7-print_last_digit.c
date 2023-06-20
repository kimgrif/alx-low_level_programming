#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: The number to print the last digit
*
* Return: Always 0
*/

int print_last_digit(int n)
{
int a = n % 10;
if (a < 0)
{
a = -a;
}
_putchar('0' + a);
return (0);
}
