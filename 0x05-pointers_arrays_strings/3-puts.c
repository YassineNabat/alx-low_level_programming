#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string to print
 *
 * Description: This function takes a pointer to a string as its parameter
 * and prints the string to the standard output, followed by a newline character.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
