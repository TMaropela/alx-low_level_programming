#include <unistd.h>

/**
 * _putchar - writing our character c to stdout
 * @c: Our printed character
 * Return: On success 1(One).
 * On error, -1 is returned
 * and errno is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

