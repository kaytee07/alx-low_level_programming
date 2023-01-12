#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check_valid_input(char *num1, char *num2);
long int multiply(char *num1, char *num2);
size_t _strlen(const char *s);

/**
 * main - multiplies two positive numbers
 * @argc: number of command line input
 * @argv: command line input array
 * Return: 0 if succesful
 */


int main(int argc, char *argv[])
{
long int result;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (check_valid_input(argv[1], argv[2]) == 1)
{
printf("Error\n");
exit(98);
}
result = multiply(argv[1], argv[2]);
printf("%ld\n", result);
return (0);
}

/**
 * check_valid_input - check if parameters are positie integers
 * @num1: first value to be multiplied
 * @num2: second value to be multiplied
 * Return: 0 if sucessfull and 1 if otherwise
 */

int check_valid_input(char *num1, char *num2)
{
size_t i;
for (i = 0; i < _strlen(num1); i++)
{
if (!isdigit(num1[i]))
return (1);
}
for (i = 0; i < _strlen(num2); i++)
{
if (!isdigit(num2[i]))
return (1);
}
return (0);
}


/**
 * multiply - multiplies parameters passed
 * @num1: first parameter
 * @num2: second parameter
 * Return: return multiplication of both numbers
 */
long int multiply(char *num1, char *num2)
{
long int a = atol(num1);
long int b = atol(num2);
return (a * b);
}

/**
 * _strlen - return the space occupied by the string
 * @s: string to find the length for
 * Return: size in byte
 */


size_t _strlen(const char *s)
{
size_t len = 0;
while (*s++)
len++;
return (len);
}
