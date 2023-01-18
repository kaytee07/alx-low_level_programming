#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function passed @size number of times
 * @array: array to be printed out
 * @size: size of the array
 * @action: funtion pointer to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
int i;
for (i = 0; i < (int) size; i++)
{
action(array[i]);
}
}
}

