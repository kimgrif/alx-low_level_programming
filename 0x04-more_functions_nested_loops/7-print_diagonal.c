#include "main.h"

/**
 *print_diagonal - draws a diagonal line in the terminal.
 *@n: number being checked
 *Return:  (Success)
*/
void print_diagonal(int n)
{
if (n >= 1)
{
int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
}
	else
{
		_putchar('\n');
	}
}
