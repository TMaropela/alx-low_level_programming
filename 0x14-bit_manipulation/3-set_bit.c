#include "main.h"

/**
 * set_bit - setting the value of our bit to (1) at given index.
 * @n: number to be set
 * @index: index to set our bit
 *
 * Return: (1) if success,
 *  or (-1) on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
