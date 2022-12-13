#include <ctype.h>
#include <stdio.h>
#include "_putchar.h"


/**
 * _isalpha - print 1 if argument is a letter and 0 if otherwise
 *
 * main - call the _isalpha function
 * return: 0
 */

int _isalpha(int c);

int main(void)
{
int r;
r = _isalpha(1);
_putchar(r + '0');
_putchar('\n');
return (0);
}


int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}else{
return (0);
}
}
