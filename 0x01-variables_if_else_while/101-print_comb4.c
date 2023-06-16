#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints all possible different combinations of three digits
 *              starting from 012, followed by a new line
 * Return: Always 0 (indicating success)
*/

int main(void)
{
int f_num, s_num, t3_num;
for (f_num = 0; f_num <= 9; f_num++)
{
for (s_num = f_num + 1; s_num <= 9; s_num++)
{
for (t3_num = s_num + 1; t3_num <= 9; t3_num++)
{
printf("%d%d%d", f_num, s_num, t3_num);
if (f_num != 7 || s_num != 8 || t3_num != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
