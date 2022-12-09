#include <stdio.h>



/**
 *main - print all combinations of two two digit number
 *
 *Return: 0 means function successfully run
 */

int main(void)
{
int firstnum;
int secondnum;
for (firstnum = 0; firstnum < 99; firstnum++)
{
for (secondnum = firstnum + 1; secondnum < 100; secondnum++)
{
putchar((firstnum / 10) + '0');
putchar((firstnum % 10) + '0');
putchar(' ');
putchar((secondnum / 10) + '0');
putchar((secondnum % 10) + '0');
if (firstnum < 99)
{
putchar(',');
putchar(' ');
}

}

}
return (0);
}
