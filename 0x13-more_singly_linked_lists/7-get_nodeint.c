#include "lists.h"

/**
 * get_nodeint_at_index - returning the node at the desired index in our linked list
 * @head: 1st node in the linked list
 * @index: index of the returned node
 * Return: pointer to the node we search for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
