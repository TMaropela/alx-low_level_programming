#include "main.h"

/**
 * get_endianness - checking the endianness
 * Return: (0) if endian big,
 * (1) if little endian
 */
int get_endianness(void)
{
	int k;
	char *q;

	k = 1;
	q = (char *)&k;
	return (*q);
}
