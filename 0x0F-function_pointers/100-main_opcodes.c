#include <stdio.h>
#include <stdlib.h>


/**
 * main - function that print opcodes of it own function
 * @argc: number of parameters passed to main
 * @argv: array holding parameters
 * Return: 0 if code runs successfully
 */

int main(int argc, char *argv[])
{
int i;
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

unsigned char *main_ptr = (unsigned char *) main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", main_ptr[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
