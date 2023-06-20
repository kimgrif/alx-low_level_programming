#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in using putchar 
 *              from a ... z
 *
 * Return: Always 0 (indicating success)
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}