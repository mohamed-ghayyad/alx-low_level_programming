#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - alphabet game in reverse.
 * Return: 0 always.
 **/
int main(void)
{
char alpha;
for (alpha = 'z'; alpha <= 'a'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
