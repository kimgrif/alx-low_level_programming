#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random valid passwords for 101-crackme.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int pass[100];
    int i, sum, rem;

    sum = 0;
    srand(time(NULL));

    for (i = 0; i < 99; i++)
    {
        pass[i] = rand() % 78;
        sum += pass[i];
        putchar(pass[i] + '0');
    }

    rem = 2772 - sum;
    pass[99] = rem;
    putchar(rem + '0');

    return 0;
}
