#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: A pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
