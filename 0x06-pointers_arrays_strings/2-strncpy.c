#include <stdio.h>
#include "main.h"

/**
 * _strncat - copy string to dest
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while(i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}

    
