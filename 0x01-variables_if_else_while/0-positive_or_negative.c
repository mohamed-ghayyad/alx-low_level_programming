#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - check if number i positive or negative
 * Return: 0 always
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%f is zero\n", n);
}
else if (n > 0)
{
printf("%f is positive\n", n);
}
else
printf("%f is negative\n", n);
return (0);
}
