#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - check if parameter is a digit from 0 to 9
 * @c: first parameter
 *
 * Return: 1 if parameter is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
int i;
int j;
i = 0;
j = 0;
for (i = 0 ; i < 10 ; i++)
{
if (i + '0' == c)
{
j = 1;
break;
}
}

if (j == 1)
return (1);
else
return (0);

}

