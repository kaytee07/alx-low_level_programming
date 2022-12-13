#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_islower - check if alphabet is lower case
 *@c: accept alphabet
 *
 *Return: 0 if it is lowercase, 1 if otherwise
 */

int _islower(int c)
{
if (isalpha(c) && islower(c))
return (1);
else
return (0);   
   
}
