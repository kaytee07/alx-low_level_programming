#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * free_grid - free memory allocation for 2D grid
 * @grid: memory location to be freed
 * @height: memory loactions that contain pointers to be freed
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height == 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
