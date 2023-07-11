#include "main.h"

/**
 * word_count - helper function to count the number of words in a string
 *
 * @s: string to evaluate
 *
 * Return: number of words
 */
int word_count(char *s)
{
int flag, a, b;
flag = 0;
b = 0;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
b++;
}
}
return (b);
}

/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrx, *tmp;
int i, k = 0, len = 0, words, a = 0, start, end;
while (*(str + len))
len++;
words = word_count(str);
if (words == 0)
return (NULL);
matrx = (char **) malloc(sizeof(char *) * (words + 1));
if (matrx == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (a)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (a + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrx[k] = tmp - a;
k++;
a = 0;
}
}
else if (a++ == 0)
start = i; }
matrx[k] = NULL;
return (matrx);
}
