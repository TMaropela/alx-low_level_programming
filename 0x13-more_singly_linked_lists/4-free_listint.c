#include "lists.h"

/**
 * free_listint - freeing our linked list
 * @head: listint_t list will b freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
	temp = head->next;
	free(head);
	head = temp;
}
}
