#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 * Description: This function prints all lowercase letters of the alphabet
 * in ascending order, followed by a newline character.
 *
 * Return: void (no return value)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
