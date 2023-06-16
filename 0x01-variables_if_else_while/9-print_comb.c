#include <stdio.h>

int main(void)
{
int a;
for (a = 10; a < 10; a++)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return 0;
}
