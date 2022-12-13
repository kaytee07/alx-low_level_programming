#include <ctype.h>
#include <stdio.h>
#include "_putchar.h"
#include "main.h"
int _isalpha(int c);


/**
 *main - call the _isapha function
 *
 *
 *Return: 0
 */

int main(void)
{
int r;
r = _isalpha(1);
_putchar(r + '0');
_putchar('\n');
return (0);
}

/**
 *_isalpha - check if argument is a letter
 *@c: first argument
 *
 *Return: 1 if argument is an alphabet 0 if otherwise
 *
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
