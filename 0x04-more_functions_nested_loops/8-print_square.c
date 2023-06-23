#include "main.h"
/**
 *print_square- prints a square line in the terminal.
 *@size: number being checked
 *Return:  (Success)
*/
void print_square(int size)
{
if (size >= 1)
{
int a, b;
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
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
