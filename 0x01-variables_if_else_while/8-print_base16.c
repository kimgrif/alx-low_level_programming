#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints all single digit numbers of base 16
 *              starting from 0, followed by a new line
 * Return: Always 0 (indicating success)
*/

int main(void)
{
int a;
char alphabet;
for (a = 0; a <= 9; a++)
{
putchar('0' + a);
}
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
