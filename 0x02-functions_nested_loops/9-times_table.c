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
q=0;
printf("%d,  ", q);
for(j = 0 ; j < 9 ; j++)
{
q = q + i;
printf("%d", q);

if (j < 8)
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


