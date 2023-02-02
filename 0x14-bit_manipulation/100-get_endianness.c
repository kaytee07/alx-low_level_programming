#include "main.h"

/**
 * get_endianness - order of which bytes of multibyte value are stored
 * Return: 0 for big endian or 1 for small endian
 */

int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;
return ((int) *c);
}
