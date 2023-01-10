#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer of two dimensional array
 * @width: length of an array of an array;
 * @height: length of array
 * Return: pointer to two dimensional array
 */

int **alloc_grid(int width, int height)
{
int **row;
int i, j;

if (height <= 0 || width <= 0)
return (NULL);

row = (int **) malloc(sizeof(int *) * height);

if (row == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
row[i] = (int *) malloc(sizeof(int) * width);
if (row[i] == NULL)
{
free(row);
for (j = 0; j <= i; j++)
free(row[j]);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
row[i][j] = 0;
}
}
return (row);
}
