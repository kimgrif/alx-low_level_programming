#include"main.h"

/**
 * jack_bauer- prints all minutes of the day
*/

void jack_bauer(void)
{
int mn, h;

for (h = 0; h <= 23; ++h)
{
for (mn = 0; mn <= 59; ++mn)
{
_putchar((h / 10) + 48);
_putchar((h % 10) + 48);
_putchar(':');
_putchar((mn / 10) + 48);
_putchar((mn % 10) + 48);
_putchar('\n');
}
}
}

