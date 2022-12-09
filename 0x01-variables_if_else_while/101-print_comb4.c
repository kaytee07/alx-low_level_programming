#include <stdio.h>


/**
 *main - print different combinations of 3 digit
 *
 *Return: 0 if function run successfully
 */

int main(void)
{
int firstnum;
int secondnum;
int thirdnum;
for (firstnum = 0; firstnum <= 7; firstnum++)
{

for (secondnum = firstnum + 1; secondnum < 9; secondnum++)
{

for (thirdnum = secondnum + 1; thirdnum < 10; thirdnum++)
{

putchar(firstnum + '0');
putchar(secondnum + '0');
putchar(thirdnum + '0');

if (firstnum < 7)
{
putchar(',');
putchar(' ');
}

}

}


}
putchar('\n');

return (0);
}
