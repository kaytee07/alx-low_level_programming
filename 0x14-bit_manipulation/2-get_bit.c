#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to travers
 * @index: index of number to get bit
 * Return: bit of the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

mask = 1UL << index;
return ((n & mask) == 0 ? 0 : 1);
}
