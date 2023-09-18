#include "main.h"

/*
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
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

