#include <stdio.h>
#include <time.h>
#include "main.h"

void jack_bauer(void)
{
time_t seconds;
struct tm *timeStruct;
seconds = time(NULL);
timeStruct = localtime(&seconds);
printf("%d:%d\n", timeStruct->tm_hour, timeStruct->tm_min);
}
