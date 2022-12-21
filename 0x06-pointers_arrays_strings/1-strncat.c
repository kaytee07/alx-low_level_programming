#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0; 
if(n > sizeof(src))
{
while(src[i] != '\0')
{
if(dest[j] == '\0' || !dest[j])
{
dest[j] = src[i];
i++;
}
j++;
}
}
else
{
while(i < n)
{
if(dest[j] == '\0' || !dest[j])
{
dest[j] = src[i];
i++;
}
j++;
}
}
dest[j] = '\0';
return (dest);
}



