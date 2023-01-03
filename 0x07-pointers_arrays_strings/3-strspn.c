#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - calculates the length (in bytes) of the initial.
 * @s: main comparison string
 * @accept: string to compare main string with
 * Return: return length of substring
 *
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, f;
i = 0;
while (s[i] != '\0')
{
j = 0;
f = 1;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
f = 0;
break;
}
j++;
}
if (f == 1)
break;
i++;
}

return (i);
}
