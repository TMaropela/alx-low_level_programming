#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reading text file print to StdOUT.
 * @filename: text file to be read
 * @letters: number of letters for reading
 * Return: the actual number of bytes read and printed
 * (0) on failure
 * or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffr;
	ssize_t dfile;
	ssize_t w;
	ssize_t t;

	dfile = open(filename, O_RDONLY);
	if (dfile == -1)
		return (0);
	buffr = malloc(sizeof(char) * letters);
	t = read(dfile, buffr, letters);
	w = write(STDOUT_FILENO, buffr, t);

	free(buffr);
	close(dfile);
	return (w);
}
