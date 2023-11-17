#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: the char to be checked
 *
 * Return: 0 if not uppercase
 *  else return 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
