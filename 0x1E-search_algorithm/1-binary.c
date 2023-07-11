#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * traverse_arr - search for value using binary searcg
 * @start: part of array set as the beginning to identyfy middle
 * @end: part fo array set as the end used to identify middle
 * @value: value to be searched
 * @array: array to be searched
 * Return: return index of value if found or -1 if failure
 */

int traverse_arr(int *array, int start, int end, int value)
{
int middle;
int i;
if (start >= end)
{
return (-1);
}
printf("Searching in array: ");
for (i = start; i < end; i++)
{
if (i == end - 1)
{
printf("%d", array[i]);
}
else
{
printf("%d, ", array[i]);
}
}
printf("\n");

middle = floor((start + end) / 2);
if (array[middle] == value)
{
return (middle);
}

if (array[middle] > value)
{
return (traverse_arr(array, start, middle, value));
}
else
{
return (traverse_arr(array, middle + 1, end, value));
}
}

/**
 * binary_search - sind value in array using binary search algo
 * @array: array to be traversed
 * @size: size of the array
 * @value: value to be searched for array
 * Return: index of value if found or -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
if (size == 0)
{
return (-1);
}
return (traverse_arr(array, 0, (int)size, value));
}
