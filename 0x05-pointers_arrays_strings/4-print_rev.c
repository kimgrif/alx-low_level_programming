#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout
 * @s: string to print
 */

void print_rev(char *s)
{
int rev;
for (rev = 0; s[rev] != '\0'; ++rev)
;
for (--rev; rev >= 0; --rev)
_putchar(s[rev]);
_putchar('\n');
}
