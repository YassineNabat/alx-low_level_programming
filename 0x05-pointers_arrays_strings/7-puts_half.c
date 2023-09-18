#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *
 * @str: A pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}

	while (i < length)
	{
		_putchar(str[i]);
	        i++;
	}

	_putchar('\n');
}
