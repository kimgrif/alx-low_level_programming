#include "main.h"

/**
 * int _sqrt_recursion(int n)- returns the natural square root of a number
 * @n: input value
 * Return: returns the natural square root of n
*/
int func_sqrt_recursion(int a, int n);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (func_sqrt_recursion(n, 0));
}
}
int func_sqrt_recursion(int a, int n)
{
if (a * a > n)
return(-1);
if (a * a == n)
return(a);
return (func_sqrt_recursion(a + 1, n));
}
