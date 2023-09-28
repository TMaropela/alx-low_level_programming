#include "main.h"

/**
 * flip_bits - counting the number of bits to be changed
 * moving from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, countsbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			countsbit++;
	}

	return (countsbit);
}

