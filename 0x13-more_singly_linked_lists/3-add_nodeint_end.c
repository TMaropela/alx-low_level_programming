#include "lists.h"

/**
 * add_nodeint_end - will add a node at the end of a linked list
 * @head: pointer to the first element in our list
 * @n: data to insert into the new element
 * Return: pointer to our new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}

