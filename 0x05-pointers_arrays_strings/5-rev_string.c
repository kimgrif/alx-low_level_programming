#include "main.h"

/**
 * rev_string - prints a string, followed by a new line, to stdout
 * @s: string to print
 */

void rev_string(char *s)
{
int rev, i;
char a;
for (rev = 0; s[rev] != '\0'; ++rev)
;
for (i = 0; i < rev / 2; ++i)
{
a = s[i];
s[i] = s[rev - 1 - i];
s[rev - 1 - i] = a;
}
}
