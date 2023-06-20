#include "main.h"

/**
* print_alphabet - prints the alphabet in using putchar
*                  from a ... z using for loop
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
