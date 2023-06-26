#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: Pointer to the integer being checked
 * @b: Pointer to the integer being checked
 *
 * Return: Always void.
 */

void swap_int(int *a, int *b)
{
int swapper = *a;
*a = *b;
*b = swapper;
}
