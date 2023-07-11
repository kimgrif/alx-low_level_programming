#include "main.h"

/**
 * alloc_grid - Create a 2D array of integers
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2D array of integers or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **area, a, b;
if (width <= 0 || height <= 0)
return (NULL);
area = malloc(height * sizeof(int *));
if (area == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
area[a] = malloc(width * sizeof(int));
if (area[a] == NULL)
{
while (a >= 0)
{
free(area[a]);
a--;
}
free(area);
return (NULL);
}
for (b = 0; b < width; b++)
area[a][b] = 0;
}
return (area);
}
