#include <stdio.h>

/**
 * main - Fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
unsigned long int index;
unsigned long int current = 1;
unsigned long int next = 2;
unsigned long int limit = 1000000000;
unsigned long int current1;
unsigned long int current2;
unsigned long int next1;
unsigned long int next2;
printf("%lu", current);
for (index = 1; index < 91; index++)
{
printf(", %lu", next);
next += current;
current = next - current;
}
current1 = (current / limit);
current2 = (current % limit);
next1 = (next / limit);
next2 = (next % limit);
for (index = 92; index < 99; ++index)
{
printf(", %lu", next1 + (next2 / limit));
printf("%lu", next2 % limit);
next1 = next1 + current1;
current1 = next1 - current1;
next2 = next2 + current2;
current2 = next2 - current2;
}
printf("\n");
return (0);
}
