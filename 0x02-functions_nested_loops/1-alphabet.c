#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in without using putchar twice
 *              from a ... z
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}