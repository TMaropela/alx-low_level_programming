#include "main.h"
/**
 * _isupper - check if letter is uppercase
 *
 * @c: checks if letter is uppercase
 *
 * Return: 1 if letter is upper, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
