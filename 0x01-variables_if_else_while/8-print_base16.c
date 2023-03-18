#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - hexadecimal
 *
 * Return: 0 always.
 */

int main(void)
{
int x;
char alpha;
for (x = '0'; x <= '9'; x++)
putchar(x);
for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
