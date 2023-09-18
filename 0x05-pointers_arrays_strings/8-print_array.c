#include "main.h"

/**
 * print_array - Prints the elements of an integer array.
 *
 * @a: A pointer to the integer array to be printed.
 * @n: The number of elements to print from the array.
 *
 * Description: This function takes a pointer to an integer array `a` and
 * the number of elements `n` as its parameters. It prints the first `n`
 * elements of the array, separated by commas and spaces.
 */

void print_array(int *a, int n)
{
	int i;

	/* Implementation of the print_array function */
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
