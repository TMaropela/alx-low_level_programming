#include "main.h"

/**
 * _pow - func calculating (base ^ power)
 * @base: base of our exponent
 * @power: power of our exponent
 *
 * Return: the result of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int lng = 1;
	unsigned int k;

	for (k = 1; k <= power; k++)
		lng *= base;
	return (lng);
}

/**
 * print_binary - printing our number in binary notation
 * @n: number to be printed
 * Return: void()
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

