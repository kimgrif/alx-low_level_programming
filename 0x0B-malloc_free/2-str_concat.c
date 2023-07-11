#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
int a = 0, b = 0;
int i, j;
char *conct;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
conct = malloc((a *sizeof(char)) + ((b + 1) * sizeof(char)));
if (conct == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
conct[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
{
conct[i] = s2[j];
i++;
}
conct[i] = '\0';
return (conct);
}
