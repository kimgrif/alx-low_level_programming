#include "main.h"
#include <stdio.h>

/**
*print_to_98 - print from n to 98 counts
*           separated by comma, and
*           by spaces, number
*           printed in order
* @n: input
* Return: The sum of the two integers
*/
void print_to_98(int n)
{
{
int a;
if (n > 98)
for (a = n; a > 98; --a)
printf("%d, ", a);
else
for (a = n; a < 98; ++a)
printf("%d, ", a);
printf("98\n");
}
}
