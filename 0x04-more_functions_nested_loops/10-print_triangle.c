#include "main.h"
#include <stdio.h>



/**
 * print_triangle - function print triangle
 * @size: first parameter
 *
 *
 */

void print_triangle(int size)
{
  int j;
  int i;
  int k;
for (i = 1; i <= size; i++)
{
  k = i;
for (j = 1; j <= size; j++)
  {
    if(k && j > size - k)
      {
    putchar('#');
    k--;
      }
    else
      {
	putchar(' ');
      }
    
  }
 putchar('\n');
}
}


int main()
{
  print_triangle(2);
  print_triangle(10);
  print_triangle(1);
  print_triangle(0);
  return (0);
}

