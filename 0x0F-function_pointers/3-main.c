#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: result of the operation
 */


int main(int argc, char *argv[])
{
int num1, num2;
char *operator;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];

if (get_op_func(operator) == NULL || operator[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*operator == 47 || *operator == 37) && num2 == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(operator)(num1, num2));

return (0);
}


