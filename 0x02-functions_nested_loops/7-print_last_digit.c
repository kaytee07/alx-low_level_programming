#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
* print_last_digit - print the last digit of a number
* @a: first parameter
*
* Return: value of last digit
*/

int print_last_digit(int a)
{
if (a < 0)
a = -a;

putchar((a % 10) + '0');
return (a % 10);
}

int main()
{
putchar(print_last_digit(INT_MIN)+ '0');
 putchar('\n');
return 0;
}

