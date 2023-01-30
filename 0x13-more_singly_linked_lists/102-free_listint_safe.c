#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - free linkedlist
 * @h: head of linked list
 * Return: number of nodes
 */


size_t free_listint_safe(listint_t **h)
{
listint_t *slow, *fast, *temp;
size_t count;

slow = *h;
fast = *h;
count = 0;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
count++;
if (slow == fast)
{
slow = *h;
while (slow != fast)
{
temp = slow;
slow = slow->next;
free(temp);
count--;
}
temp = slow;
slow = slow->next;
free(temp);
*h = NULL;
return (count);
}
}

while (*h != NULL)
{
temp = *h;
*h = (*h)->next;
free(temp);
count++;
}

*h = NULL;
return (count);
}
