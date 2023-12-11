#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string to be copied.
 *
 * Description: This function copies the contents of the source string pointed
 * to by `src` to the destination string pointed to by `dest`, including the
 * null-terminator.
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
