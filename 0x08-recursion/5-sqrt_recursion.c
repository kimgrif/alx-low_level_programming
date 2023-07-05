#include "main.h"
int func_sqrt_recursion(int n, int a);
/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: input value
 * Return: returns the natural square root of n
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (func_sqrt_recursion(0, n));
}
/**
 * func_sqrt_recursion- recurses to find the natural
 *                      square root of a number
 * @a: iterator
 * @n: input value
 * Return: the resulting square root
*/
int func_sqrt_recursion(int n, int a)
{
if (a * a > n)
return (-1);
if (a * a == n)
return (a);
return (func_sqrt_recursion(n, a + 1));
}
