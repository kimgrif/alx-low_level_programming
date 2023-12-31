#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int a, b, result;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
result = 0;
if (a < 0)
{
printf("0\n");
return (0);
}
for (b = 0; b < 5 && a >= 0; b++)
{
while (a >= coins[b])
{
result++;
a -= coins[b];
}
}
printf("%d\n", result);
return (0);
}
