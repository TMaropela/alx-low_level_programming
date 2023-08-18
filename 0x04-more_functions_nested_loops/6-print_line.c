#include "main.h"
/**
 * print_line - prints a straight line
 * @n: number of lines to print
 * Return: none
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
	}
}
