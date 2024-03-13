#include "search_algos.h"

/**
 * linear_search - searching for a value in an array
 * 		  of integers using linear search
 * @array: A pointer to the first element of our array to search
 * @size: no. of elementsin array
 * @value: value to search for
 *
 * Return: -1 if array is null OR value not present
 * 	Otherwise the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
	return (-1);
for (i= 0; < size; i++)
	printf("Value checked array[%ld] = [%d]\n", i, array[i];)
	if (array[i] == value)
			return (i);
return(-1);
}
