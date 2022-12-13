#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_islower - check if alphabet is lower case
 *
 *
 *Return: 0 if it is lowercase, 1 if otherwise
 */

int _islower(int c)
{
if(isalpha(c) && isupper(c))
  return (0);
else
{
return (1);
}   
   
}
