#include <stdio.h>
#include "main.h"


/**
 * _strcat - concatenate src to destination
 * @dest: first parameter
 * @src: second parameter
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (src[i] != '\0')
{
if (dest[j] == '\0' || !dest[j])
{
dest[j] = src[i];
i++;
}
j++;
}
dest[j] = '\0';
return (dest);
}


