#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * @min: minimum integer that should be in the array
 * @max: max number to be in the array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
int i, *ptr, size;
if (min > max)
return (NULL);

size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
{
*(ptr + i) = min;
min++;
}

return (ptr);
}

