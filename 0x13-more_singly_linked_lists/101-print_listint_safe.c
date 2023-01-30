#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - print a linked list
 * @head: head node of linked list
 * Return: number of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count;

slow = head;
fast = head;
count = 0;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
count++;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}

return (count);
}
