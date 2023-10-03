#include "main.h"

/**
 * create_file - Creating file.
 * @filename: A pointer to name of file to be created.
 * @text_content: A pointer to a string wherein the file will be written.
 *
 * Return:  (-1) On failure.
 * Or  - (1).
 */
int create_file(const char *filename, char *text_content)
{
	int dfile, w, lenk = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenk = 0; text_content[lenk];)
			lenk++;
	}

	dfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(dfile, text_content, lenk);

	if (dfile == -1 || w == -1)
		return (-1);

	close(dfile);

	return (1);
}
