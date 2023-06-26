#include "main.h"

/**
 * puts_half - prints half of a string
 *             followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
int a, b, counter;
counter = 0;
for (a = 0; str[a] != '\0'; a++)
counter++;
b = (counter / 2);
if ((counter % 2) == 1)
b = ((counter + 1) / 2);
for (a = b; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
