#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the values of 2d array
 * @a: 2d arrays of chars
 *
 *
 *
 */


void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
