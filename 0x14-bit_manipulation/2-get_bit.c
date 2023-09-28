#include"main.h"

/**
 * get_bit - returning the value of our bit at a given index.
 * @n: number to check our bits in
 * @index: index at which bits are checked
 * Return: value of our bit,
 *  or (-1) on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}

