#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and checks its properties.
 *              If the number is greater than 5, it states that.
 *              If the number is less than 6 and not 0, it states that.
 *              If the number is 0, it states that.
 * Return: Always 0 (indicating success)
 */

int main(void)
{
int n;
int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
l = n;
if (n > 5)
{
printf("%d and is greater than 5\n", l % 10);
}
else if (n != 0 && n < 6)
{
printf("%d and is less than 6 and not 0\n", l % 10);
}
else
{
printf("%d and is 0", l % 10);
}
return (0);
}
