#include<stdio.h>
/**
 * main - print numbers 0-9
 * Return: 0 always
 */
int main(void)
{
int n;
for (n = '0'; n < '10'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
