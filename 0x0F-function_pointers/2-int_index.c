#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: array to be searched to find integer
 * @size: size of the array to be searched
 * @cmp:search function
 * Return: -1 if function fails and index of array if success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size < 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
