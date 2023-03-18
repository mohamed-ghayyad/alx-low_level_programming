#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - last digit logic
 * Return: 0 always.
 */
int main(void)
{
int n, rndr;
srand(time(0));
n = rand() - RAND_MAX / 2;
rndr = n % 10;
if (rndr > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, rndr);
}
else if ( (rndr < 6)&&(rndr != 0) )
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rndr);
}
else if ( rndr == 0 )
{
printf("Last digit of %d is %d and is 0\n", n, rndr);
}
return (0);
}
