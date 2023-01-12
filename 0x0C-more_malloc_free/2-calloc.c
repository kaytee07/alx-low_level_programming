#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - dymaically allocate memory
 * @nmemb: number of element to allocate space for
 * @size: byte of space to allocate
 * Return: dynamic memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (!ptr)
return (NULL);
for (i = 0; i < nmemb - 1; i++)
{
*(ptr + i) = 0;
}
return (ptr);
}
