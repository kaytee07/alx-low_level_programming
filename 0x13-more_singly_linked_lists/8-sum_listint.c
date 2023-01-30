#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all integers in list
 * @head: head node of liked list
 * Return: sum of all n integers
 */

int sum_listint(listint_t *head)
{
int total = 0;
listint_t *temp;
if (head == NULL)
return (0);
temp = head;
while (temp->next != NULL)
{
temp = temp->next;
total += temp->n;
}

return (total);
}
