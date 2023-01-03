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
int i;
int j;
unsigned long int k = 0;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (accept[i] == s[j])
{
k++;
break;
}
}
}
return (k);
}

