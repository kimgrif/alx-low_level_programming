#include "main.h"

/**
 *print_line - draws a straight line in the terminal.
 *@n: number being checked
 *Return:  (Success)
*/
void print_line(int n)
{
if (n <= 0)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
