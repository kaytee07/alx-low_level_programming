#include <stdio.h>
#include "main.h"
/**
 * main - print all commandline args
 * @argc: number of commandline args
 * @argv: array of commandline args
 * Return: 0 if program runs successfully
 */


int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
