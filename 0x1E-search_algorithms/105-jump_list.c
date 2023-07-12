#include <math.h>
#include "search_algos.h"

/**
 * move_forward - moves a list forward till index matches what we 
 * are searching for or last node
 * @list: linked list to traverse
 * @index: index searched for
 *
 * Return: node with desired index, or last node in the list
 */
listint_t *move_forward(listint_t *list, size_t index)
{
	while (list->next != NULL && list->index < index)
		list = list->next;
	return (list);
}

/**
 * jump_list - searches for a value in a sorted linked list
 * @list: pointer to the head of the linked list
 * @size: size of the linked list
 * @value: value to search for
 *
 * Return: pointer to the node where value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	listint_t *left, *right;

	if (list != NULL && size > 0)
	{
		jump = sqrt(size);
		left = list;
		right = move_forward(left, jump);
		printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		while (right->index < (size - 1) && right->n < value)
		{
			left = right;
			right = move_forward(left, right->index + jump);
			printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				left->index, right->index);
		printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		while (left->index < size - 1 && left->n < value)
		{
			left = left->next;
			if (left == NULL)
				return (NULL);
			printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		}
		if (left->n == value)
			return (left);
	}
	return (NULL);
}
