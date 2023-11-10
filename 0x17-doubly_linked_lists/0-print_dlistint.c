#include "lists.h"
/**
 * print_dlistint - printing a linked list
 * @h: pointer to our linked list
 * Return: No. of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
size_t length = 0;
while (h != NULL)
{
printf("%d\n", h->n);
length++;
h = h->next;
}
return (length);
}
