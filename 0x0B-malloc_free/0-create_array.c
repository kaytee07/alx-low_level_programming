#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create and array and initialize it to a value
 * @size: this is the number * data type of memory to allocate
 * @c: this is the value to initialize the array with
 * Return: a pointer to the first value
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ptr = (char *) malloc(size * sizeof(char));
if (ptr == NULL)
{
return (0);
}

for (; i < size; i++)
{
*(ptr + i) = c;
}
*(ptr + i) = '\0';
return (ptr);
}


