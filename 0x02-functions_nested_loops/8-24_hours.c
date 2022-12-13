#include <stdio.h>
#include <time.h>
#include "main.h"



/**
 * jack_bauer - print every minute within the day
 *
 *
 */
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24 ; i++)
{
for (j = 0; j < 60; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(':');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
putchar('\n');
}
}
}


