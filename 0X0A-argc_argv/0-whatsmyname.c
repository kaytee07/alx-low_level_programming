#include <stdio.h>

/**
 * main - print the name of this program
 * @argc: length of command line args
 * @argv: command line array
 * Return: 0 if program success
 */

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
