#include "main.h"

/**
 * binary_to_uint - function converts our binary number to an unsigned int.
 * @b: pointer to our string that contains a binary no.
 * Return: unsigned integer with decimal value of binary num,
 * or Zero(0) if error
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int bin;

	bin = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		bin <<= 1;
		if (b[k] == '1')
			bin += 1;
	}
	return (bin);
}

