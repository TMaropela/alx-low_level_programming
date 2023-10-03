#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocating 1024 bytes for our buffer.
 * @file: The name of our file buffer storing chars.
 * Return: A pointer to our newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffr;

	buffr = malloc(sizeof(char) * 1024);

	if (buffr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffr);
}

/**
 * close_file - Closing file descriptors.
 * @fd: The file descriptors to close.
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copying contents of our file to another file.
 * @argc: no. of arguments supplied to our program.
 * @argv: An array of pointers to our argument(s).
 * Return: 0 on success.
 * Description: If the argument count is incorrect give us exit code 97.
 * If file_origin non-existent or cannot be read give us  exit code 98.
 * If file_to cannot be created or written to give us  exit code 99.
 * If file_to or file_from cannot be closed give us  exit code 100.
 */
int main(int argc, char *argv[])
{
	int origin, to, r, w;
	char *buffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_origin file_to\n");
		exit(97);
	}

	buffr = create_buffer(argv[2]);
	origin = open(argv[1], O_RDONLY);
	r = read(origin, buffr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (origin == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read origin file %s\n", argv[1]);
			free(buffr);
			exit(98);
		}

		w = write(to, buffr, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffr);
			exit(99);
		}

		r = read(origin, buffr, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffr);
	close_file(origin);
	close_file(to);

	return (0);
}

