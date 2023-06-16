#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase without using printf or puts
 *from a ... z then to uppercase
 * Return: Always 0 (indicating success)
 */

int main(void)
{
char alphabet;
char letters;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (letters = 'A'; letters <= 'Z'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
