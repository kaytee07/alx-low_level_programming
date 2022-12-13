#include "main.h"
#include <stdio.h>


/**
 * times_table - print the 9 times table
 *
 *
 *
 */


void times_table(void)
{
int i;
int j;
int q;
q = 0;

for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
if (j == 0)
q = 0;
else
q = q + i;
if(q == 0 && j == 0)
{
  printf("%d", q);
}
else
{
printf("%2d", q);
}
if (j < 9)
printf(", ");
}
printf("\n");
}
}


