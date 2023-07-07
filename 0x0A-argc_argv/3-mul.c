#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int a;
if (argc != 5)
{
printf("Error\n");
return (1);
}
else
{
a = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", a);
}
return (0);
}
