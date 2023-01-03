#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n byte of memory area pointed to by s with b
 * @s: memory area to be filled
 * @b: value to fill s with
 * @n: the amount of memory in byte to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}



