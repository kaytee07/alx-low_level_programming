#include "search_algos.h"


/**
 * advanced_binary_recursive - Searches recursively
 * for a value in a sorted array of integers using binary search.
 * @array: array of integers to be searched recursively
 * @left: the starting index of the sub array to search
 * @right: the ending index of the sub array to search
 * @value: value to search for
 * Return: index of the value we are searching gor otherwise -1
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}


/**
 * advanced_binary - search array of integers using the
 * advanced binary search
 * @array: array of integers to be searched
 * @size: this is the size of the array
 * @value: value to be searched for
 * Return: return the index of the value or -1 if failure
 *
 *
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
