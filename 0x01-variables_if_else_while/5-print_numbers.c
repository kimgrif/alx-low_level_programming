#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints all single digit numbers of base 10
 *              starting from 0, followed by a new line
 * Return: Always 0 (indicating success)
*/

int main(void)

{
int a;
for (a = 0; a <= 9; )
{
printf("%d", a);
a++;
}
return (0);
}
