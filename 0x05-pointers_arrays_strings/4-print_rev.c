#include "main.h"

/**
 * print_rev - imprime en reverse.
 *
 * @s: A pointer to the string to be printed in reverse.
 * 
 * Description: This function takes a pointer to a string as its parameter
 * and prints the characters of the string in reverse order.
 */

void print_rev(char *s)
{
	int lngi = 0;
	int z;

	while (*s != '\0')
	{
		lngi++;
		s++;
	}
	s--;
	for (z = lngi; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
