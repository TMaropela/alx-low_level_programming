#include "lists.h"

/**
 * sum_listint - calculating the sum of all data in our listint_t list
 * @head: thee first node in our linked list
 * Return: a sum/result
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
