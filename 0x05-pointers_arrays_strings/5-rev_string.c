#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Input string
 *
 * Description: This function takes a pointer to a string as its parameter
 * and reverses the characters of the string in-place.
 */

void rev_string(char *s)
{
	char rv = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rv = s[i];
		s[i] = s[counter];
		s[counter] = rv;
	}
}
