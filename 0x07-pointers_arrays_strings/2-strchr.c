#include "main.h"
#include <stdio.h>

/**
 * _strchr - return a pointer to the first occurence of of c in s
 * @s: array to compare to char
 * @c: character to find in array
 * Return: NULL or address if there is a match
 *
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
break;
}
i++;
}

return (s[i] == '\0' ? NULL : &s[i]);
}

