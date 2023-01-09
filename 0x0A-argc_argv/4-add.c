#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - add command line arguments that are numbers
 * @argc: number of command line arguments passed
 * @argv: array of command line argument passed
 * Return: 0 if successful, 1 if otherwise
*/

int main(int argc, char *argv[])
{
int result = 0;
int i = 1;

if (argc == 1)
{
printf("%d\n", result);
return (1);
}
for (; i < argc; i++)
{
if (strtol(argv[i], NULL, 10))
{
result += strtol(argv[i], NULL, 10);
}
else
{
printf("Error\n");
return (1);
}
}

if (argv[i] == argv[argc])
{
printf("%d\n", result);
}

return (0);
}
