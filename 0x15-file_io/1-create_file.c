#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the file name to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return:-1 If the function fails .
 *         Otherwise  1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, ln);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
