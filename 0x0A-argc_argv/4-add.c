#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * is_Num - check if string array is num
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
*/

int is_Num(char num[])
{
int a, b = strlen(num);
for (a = 0; a < b; a++)
{
if (!isdigit(num[a]))
return (1);
}
return (0);
}


/**
 * main - a program that adds positive numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int a, sum;
if (argc == 1)
{
printf("0\n");
}
else
{
sum = 0;
for (a = 1; a < argc; a++)
{
if (is_Num(argv[a]) == 0)
{
sum += atoi(argv[a]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
