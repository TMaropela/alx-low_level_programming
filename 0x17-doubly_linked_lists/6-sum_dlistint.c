#include "lists.h"
/**
 * sum_dlistint - sums the values of all  nodes in our dlistint_t list
 * @head: pointer to our head of the list
 * Return: if our list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
int sum = 0;

tmp = head;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
