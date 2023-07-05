#include "main.h"

int func_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - Returns the square root of a number
 * @n: The number to calculate the square root of
 * Return: The square root of n (or -1 if non-perfect square or invalid input)
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    return func_sqrt_recursion(n, 0);
}

/**
 * func_sqrt_recursion - Recursively searches for the square root of a number
 * @n: The number to calculate the square root of
 * @a: The current value being tested as the square root
 * Return: The square root of n (or -1 if non-perfect square)
 */
int func_sqrt_recursion(int n, int a)
{
    if (a * a == n)
        return a;
    if (a * a > n)
        return -1;
    return func_sqrt_recursion(n, a + 1);
}

