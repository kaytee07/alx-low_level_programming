#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - function that allocate memory of specified size
 * @b: specifies the number of byte of memory to allocate
 * Return: pointer to reserved memory
 *
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
