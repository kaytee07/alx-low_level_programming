#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string to find substring in
 * @needle: string to search within haystack
 * Return: pointer of first char of match
 *
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int k = 0;
int temp;
for (i = 0; haystack[i] != '\0'; i++)
{
temp = i;
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
i++;
if (needle[j + 1] == '\0')
{
k++;
}
}
else
{
break;
}
}
i = temp;
if (k)
{
break;
}
}
return (k == 1 ? &haystack[i] : NULL);
}

