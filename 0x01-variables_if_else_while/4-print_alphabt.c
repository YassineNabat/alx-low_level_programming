#include <stdio.h>
/**
 * main - Prints the alphabet without q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	do
	{
		if ((c != 'q' && c != 'e') 
		{
			putchar(c);
		}
		c++;
		} while (c <= 'z' );
		putchar('\n');
		return (0);

}
