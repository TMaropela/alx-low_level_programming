#include "main.h"
/**
 * _puts - prints a string, followed by a newline
 * @str: points to string
 * Return: null
 */
void _puts(char *str)
{
	int k;

	k = 0;
	if (*str != '\0')
	{
		while (*(str + k) != '\0')
		{
			_putchar(*(str + k));
			k++;
		}
	}
	_putchar('\n');
}
