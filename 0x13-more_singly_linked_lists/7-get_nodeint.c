#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * get_nodeint_at_index - get the nth node
 * @index: the nth node to return
 * @head: the head of the linked list
 * Return: 0 if head is empty and the nth node if otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp;

if (head == NULL)
return (NULL);

temp = head;

for (i = 0; i < index; i++)
{
if (i <= index && temp == NULL)
break;
temp = temp->next;
}
return (temp);
}




