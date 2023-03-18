#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - alphabet game without e and q
 *
 * Return: 0 always.
 */

int main(void)
{
char alpha, e, q;
e = 'e';
q = 'q';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != e && alpha != q)
putchar(alpha);
}
putchar('\n');
return (0);
}
