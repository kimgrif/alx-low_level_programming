#include "main.h"
#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024
 *        that are multiples of 3 or 5 and sums them up.
 *
 * Return: Always 0.
 */

int main(void)
{
int x, i = 0;
for (x = 0; x < 1024; x++)
{
if ((x % 3 == 0) || (x % 5 == 0))
{
i += x;
}
}
printf("%d\n", i);

return (0);
}
