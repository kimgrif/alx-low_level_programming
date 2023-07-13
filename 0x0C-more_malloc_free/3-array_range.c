#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
int i, *array;
if (min > max)
return (NULL);
array = malloc((max - min + 1) * sizeof(int));
if (array == NULL)
return (NULL);
for (i = 0; min <= max; i++)
{
array[i] = min;
min++;
}
return (array);
}
