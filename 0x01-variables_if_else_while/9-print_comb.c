#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  a program that prints all possible comb of s-digit numbers.
 *
 * Return: 0 always.
 */

int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
{
putchar(d);
if (d != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
