#include <stdio.h>

/**
 *main - print the combinations of two digit numbers
 *
 *Return: 0 if function runs successfully
 */

int main(void)
{
int comb;
int nxtnum;
for (comb = 0 ; comb < 10 ; comb++)
{
if (comb == 9)
{
break;
}
for (nxtnum = comb + 1 ; nxtnum < 10 ; nxtnum++)
{
putchar(comb + '0');
putchar(nxtnum + '0');
if (comb < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
