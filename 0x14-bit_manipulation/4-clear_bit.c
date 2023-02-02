#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: value whose index is to be set to 0 at a given index
 * @index: index at which value of a bit is set to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (n == NULL || index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

mask = 1UL << index;
*n = *n & ~mask;

return (1);
}
