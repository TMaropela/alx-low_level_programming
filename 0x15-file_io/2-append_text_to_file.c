#include "main.h"

/**
 * append_text_to_file - Appending text at the end of our file.
 * @filename: pointer to our file-name.
 * @text_content: string to added to the end of our file.
 *
 * Return: (-1) On failure 
 * Or filename is NULL.
 * If file is non-existent the user needs write permissions - (-1).
 * Otherwise ret. 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, len);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}

