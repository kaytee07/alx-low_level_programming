#include "search_algos.h"


/**
 * binary__search - sind value in array using binary search algo
 * @array: array to be traversed
 * @left: starting index of the sub array
 * @right: ending index of the sub array
 * @value: value to be searched for array
 * Return: index of value if found or -1 if not
 */

int binary__search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}


/**
 * exponential_search - search array using the interpolation
 * search method
 * @array: array to be searched
 * @size: this is the size of the array
 * @value: value to be searched for
 * Return: return the index of the value or -1 if failure
 *
 *
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary__search(array, i / 2, right, value));
}
