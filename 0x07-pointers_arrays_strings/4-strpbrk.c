#include "main.h"
#include <stdio.h>


/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to which the search is going to be performed
 * @accept: character to be searched in s
 * Return: return pointer if s matches any char in string
 *
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
return (s + i);
j++;
}
i++;
}
return ('\0');
}

