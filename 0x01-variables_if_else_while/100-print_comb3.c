#include<stdio.h>

int main(void)
{
int f_num = 0, s_num;
while (f_num <= 9)
{
s_num = f_num + 1;
while (s_num <= 9)
{
putchar(f_num + '0');
putchar(s_num + '0');
if (f_num != 8 || s_num != 9)
{
putchar(',');
putchar(' ');
}
++s_num;
}
++f_num;
}
putchar('\n');
return 0;
}
