#include "search_algos.h"

/**
 * linear_search - find value in array using linear search algo
 * @array: array to be traversed
 * @size: size of array to be traversed
 * @value: value to be searched
 * Return: -1 if failure or index of value if found
 */

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (size < 1)
{
return (-1);
}

for (; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}

