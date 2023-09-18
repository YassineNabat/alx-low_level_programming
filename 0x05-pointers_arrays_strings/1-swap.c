#include "main.h"

/*
 * swap_int - swaps the values of two integers
 *
 * @a: integer to swap
 * @b: integer to swap
 *
 * This function takes two pointers to integers as its parameters
 * and swaps the values of the integers they point to.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

