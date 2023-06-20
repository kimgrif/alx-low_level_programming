#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description:  prints _putchar, followed by a new line
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
const char *cara = "_putchar\n";
write(1, cara, 9);
return (0);
}
