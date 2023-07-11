#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - find value in array using linear search algo
 * @array: array to be traversed
 * @size: size of array to be traversed
 * @value: value to be searched
 * Return: -1 if failure or index of value if found
 */

int linear_search(int *array, size_t size, int value)
{
int i = 0;
int new_size = (int) size;
if (size < 1)
{
return (-1);
}

for (; i < new_size; i++)
{
printf("Value checked array[%u] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
