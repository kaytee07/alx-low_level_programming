#include "search_algos.h"
#include <math.h>

/**
 * binary_search - sind value in array using binary search algo
 * @array: array to be traversed
 * @size: size of the array
 * @value: value to be searched for array
 * Return: index of value if found or -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
size_t start = 0;
size_t end = size - 1;

if (array == NULL || size == 0)
{
return (-1);
}

while (start <= end)
{
size_t middle = start + (end - start) / 2;

printf("Searching in array: ");
for (size_t i = start; i <= end; i++)
{
if (i == end)
{
printf("%d", array[i]);
}
else
{
printf("%d, ", array[i]);
}
}
printf("\n");
if (array[middle] == value)
{
return ((int)middle);
}
else if (array[middle] < value)
{
start = middle + 1;
}
else
{
end = middle - 1;
}
}
return (-1);
}
