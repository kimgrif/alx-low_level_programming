#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print name using pointer to function
 * @name: String to add
 * @f: Pointer to functionfunction pointer that doesn't return anything
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
