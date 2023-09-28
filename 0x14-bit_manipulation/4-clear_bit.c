#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - setting the value of our bit to (0) at given index
 * @n: our parameter
 * @index: our index
 * Return: (1) if success,
 * (-1) on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

