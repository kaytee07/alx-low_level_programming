#include "main.h"


/**
 * set_bit - set value of 1 bit at a given index
 * @n: number whose value is to be set at n index
 * @index: index to set value to 1 bit
 * Return: 1 if it worked, or -1 if an error occurred
 */


int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (n == NULL || index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

mask = 1UL << index;
*n = *n | mask;

return (1);
}
