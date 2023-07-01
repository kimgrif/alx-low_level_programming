/**
 * leet - a function that encodes a string into 1337
 *
 * @n: string input
 *
 * Return: @n
*/

char *leet(char *n)
{
int i, c = 0;
int sl[] = {97, 101, 111, 116, 108};
int ul[] = {65, 69, 79, 84, 76};
int s[] = {52, 51, 48, 55, 49};
while (n[c] != '\0')
{
for (i = 0; i < 5; i++)
{
if (n[c] == sl[i] || n[c] == ul[i])
{
n[c] = s[i];
break;
}
}
c++;
}
return (n);
}
