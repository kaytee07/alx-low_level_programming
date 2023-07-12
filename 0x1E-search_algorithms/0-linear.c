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
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
