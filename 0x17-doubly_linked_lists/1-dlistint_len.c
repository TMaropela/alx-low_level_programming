#include "lists.h"

/**
 * dlistint_len - no. of elements in our linked list
 * @h: head pointer
 * Return: the no. of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
