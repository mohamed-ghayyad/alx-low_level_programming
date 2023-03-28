#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers.
 * @c: an inout integer pointer
 * @v: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *c, int *v)
{
	int vu;

	vu = *c;
	*c = *v;
	*v = vu;
}

