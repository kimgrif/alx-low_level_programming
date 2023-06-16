#include<stdio.h>

/**
 * main - Entry Point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: Always 0 (indicating success)
 */

int main(void)
{
int f_num = 0, s_num;
while (f_num <= 99)
{
s_num = f_num;
while (s_num <= 99)
{
if (s_num != f_num)
{
putchar((f_num / 10) + 48);
putchar((f_num % 10) + 48);
putchar(' ');
putchar((s_num / 10) + 48);
putchar((s_num % 10) + 48);
if (f_num != 98 || s_num != 99)
{
putchar(',');
putchar(' ');
}
}
++s_num;
}
++f_num;
}
putchar('\n');
return (0);
}
