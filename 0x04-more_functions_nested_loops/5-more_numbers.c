#include "main.h"
/**
 * more_numbers - printing 0-14 10 times
 * description - Print 0-14 10 times
 * Return: prints 10 times the numbers, from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
		_putchar((j / 10) + '0');
	}
		_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
