#include <stdio.h>
#include "main.h"
/**
 * main - print number of argument passed to main
 * @argc: number of argument passed to main;
 * @argv: array of argument passed to main
 * Return: 0 if successful
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
