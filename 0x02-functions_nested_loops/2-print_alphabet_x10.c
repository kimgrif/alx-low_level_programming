#include "main.h"

/**
*print_alphabet_x10 - print alphabet 10 times
*
*/

void print_alphabet_x10(void)
{
char alphabet;
int times = 1;
while (times <= 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
times++;
}
}
