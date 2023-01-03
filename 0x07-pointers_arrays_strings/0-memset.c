#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n byte of memory area pointed
 * @s: memory area to be filled
 * @b: value to fill s with
 * @n: the amount of memory in byte to fill
 * Return: pointer to the filled memory
 */

ar *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
