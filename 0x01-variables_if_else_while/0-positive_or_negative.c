#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 *main - determine i randomf number is positive or negative
 *
 *Return: 0 if function runs sucessfully
 */
int main(void)
{
srand(time(NULL));
int n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i: is positive\n", n);
else if (n == 0)
printf("%i: is zero\n", n);
else
printf("%d: is negative\n", n);

return (0);
}
