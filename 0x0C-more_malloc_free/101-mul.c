#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int check_valid_input(char *num1, char *num2);
char *multiply(char *num1, char *num2);

/**
 * main - multiplies two positive numbers
 * @argc: number of command line input
 * @argv: command line input array
 * Return: 0 if succesful
 */


int main(int argc, char *argv[])
{
char *result;
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
printf("%s\n", result);
free(result);
return (0);
}

/**
 * check_valid_input - check if parameters is a digit
 * @num1: first parameter
 * @num2: second parameter
 * Return: 0 is successful
 */

int check_valid_input(char *num1, char *num2)
{
int i;
for (i = 0; i < (int) strlen(num1); i++)
{
if (!isdigit(num1[i]))
return (1);
}
for (i = 0; i < (int) strlen(num2); i++)
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

char *multiply(char *num1, char *num2)
{
int i, j, k, carry = 0, num1Len, num2Len, productLen;
int *product;
char *result;
num1Len = strlen(num1);
num2Len = strlen(num2);
productLen = num1Len + num2Len;
product = (int *)malloc(productLen *sizeof(int));
for (i = 0; i < productLen; i++)
product[i] = 0;
for (i = num1Len - 1; i >= 0; i--)
{
carry = 0;
k = productLen - (num1Len - i);
for (j = num2Len - 1; j >= 0; j--)
{
product[k] += (num1[i] - '0') * (num2[j] - '0') + carry;
carry = product[k] / 10;
product[k] %= 10;
k--;
}
product[k] += carry;
}
i = 0;
while (i < productLen && product[i] == 0)
i++;
result = (char *)malloc((productLen - i + 1) * sizeof(char));
j = 0;
while (i < productLen)
{
result[j++] = product[i++] + '0';
}
result[j] = '\0';
free(product);
return (result);
}


