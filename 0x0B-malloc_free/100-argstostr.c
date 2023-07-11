#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: input count
 * @av: argument values
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
int a, b, len = 0, n = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
len++;
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
str[n++] = av[a][b];
}
str[n++] = '\n';
}
str[len] = '\0';
return (str);
}
