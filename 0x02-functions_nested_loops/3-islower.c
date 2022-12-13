#include <stdio.h>
#include <ctype.h>
#include "_putchar.h"

int _islower(int c);

int main(void)
{
int r;
r = _islower('h');
_putchar(r + '0');
_putchar('\n');
  return (0);
}

int _islower(int c)
{
if(isupper(c))
{
return (0);
}else{
return(1);
}
}
