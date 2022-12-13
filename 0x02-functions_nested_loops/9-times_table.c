#include "main.h"
#include <stdio.h>



void times_table(void)
{
int i;
int j;
int q;
q= 0;

for(i = 0 ; i <= 9 ; i++)
{
for(j = 0 ; j <= 9 ; j++)
{
if(j == 0)
q = 0;
else
q = q + i;
printf("%d", q);
if (j <= 8)
{
if (q <= 9)
{
printf(",  ");
}
else
{
printf(", ");
}
}
}
_putchar('\n');
}
}
