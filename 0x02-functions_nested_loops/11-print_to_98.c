
#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print from argument to 98
 *
 *
 *
 */

void print_to_98(int n)
{
int i;
if (n > 98){
for (i = n ; i >= 98 ; i--)
{
printf("%d", i);  
if (i > 98)
printf(", ");
 
}
}
else if(n < 98)
{

for (i = n ; i < 99 ; i++)
{
  
printf("%d", i);
if (i <= 97)
printf(", ");
 
}
 
}
else
printf("%d", n);
  
   
putchar('\n');
}

