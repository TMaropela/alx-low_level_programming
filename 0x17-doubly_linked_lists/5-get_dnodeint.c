#include "lists.h"
/**
 * get_dnodeint_at_index - getting the nth node of 
 * our doubly linked list
 * @head: pointer to our list
 * @index: index of the node to return
 * Return: address of our node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
unsigned int i;

tmp = head;
i = 0;
if (head == NULL)
return (NULL);
while (tmp != NULL)
{
if (i == index)
return (tmp);
tmp = tmp->next;
i++;
}
return (NULL);
}
