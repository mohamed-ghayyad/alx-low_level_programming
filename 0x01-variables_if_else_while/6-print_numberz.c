#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - print numbers 0-9
 * Return: 0 always
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
