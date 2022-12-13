#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: parameter to check for sign
 *
 * Return: 1 when is greater than zero
 * 0 when n is zero
 * -1 when n is negative
 */


int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
