#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print all commandline args
 * @argc: number of commandline args
 * @argv: array of commandline args
 * Return: 0 if program runs successfully
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%ld\n",
strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10));
return (0);
}
