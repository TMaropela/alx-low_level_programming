#include "lists.h"

/**
 * add_nodeint - will add a new node at the start of a linked list
 * @head: pointer to the first node in the linked list
 * @n: data to insert in the proposed new node
 * Return: a pointer to the new node, or NULL if its a failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
