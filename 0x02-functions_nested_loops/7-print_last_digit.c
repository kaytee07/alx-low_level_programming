#include "main.h"
#include <stdio.h>

/**
* print_last_digit - print the last digit of a number
*
*
* Return: value of last digit
*/

int print_last_digit(int a)
{
if( a < 0)
a = -a;

return a % 10;
}

