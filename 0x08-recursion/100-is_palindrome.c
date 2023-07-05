#include "main.h"

int search_is_palindrom(char *s, int a, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (search_is_palindrom(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * search_is_palindrom - checks the characters recursively for palindrome
 * @s: string to check
 * @a: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int search_is_palindrom(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
		return (0);
	if (a >= len)
		return (1);
	return (search_is_palindrom(s, a + 1, len - 1));
}
