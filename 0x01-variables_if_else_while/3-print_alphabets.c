#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A-a alphABET
 *
 * Return: 0 always
 */

int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
for (alpha = 'A'; alpha <= 'Z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
