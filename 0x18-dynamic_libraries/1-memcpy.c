#include "main.h"
#include <stdio.h>


/**
 * _memcpy - copy n byte from src to dest
 * @dest: destination to store copied memory area
 * @src: memory area copied to dest
 * @n: number of bytes to copy
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}


