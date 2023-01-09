#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - add command line arguments that are numbers
 * @argc: number of command line arguments passed
 * @argv: array of command line argument passed
 * Return: 0 if successful, 1 if otherwise
*/

int main(int argc, char *argv[])
{
int i, j, add = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
