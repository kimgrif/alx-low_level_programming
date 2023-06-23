#include "main.h"
#include <stdio.h>

/**
 *print_triangle- prints a triangle line in the terminal.
 *@size: number being checked
 *Return:  (Success)
*/
void print_triangle(int size)
{
if (size >= 1)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
