#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: pprints all possible different combinations of two digits.
 *              starting from 0, followed by a new line
 * Return: Always 0 (indicating success)
*/

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
return (0);
}
