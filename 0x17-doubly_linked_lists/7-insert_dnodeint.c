#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at index
 * @h: head of linked list
 * @idx: index to insert new node
 * @n: value of new node
 * Return: address of new node if inserted or null if otherwise
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int current_index = 0;
    dlistint_t *new_node;
    dlistint_t *current_node = *h;
    
    if (*h == NULL)
        return (NULL);
    
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    
    new_node->n = n;
    
    while (current_node != NULL && current_index < idx)
    {
        if (current_index == idx - 1 || current_node->next == NULL)
        {
            new_node->next = current_node->next;
            new_node->prev = current_node;
            if (current_node->next != NULL)
                current_node->next->prev = new_node;
            current_node->next = new_node;
            return (new_node);
        }
        current_node = current_node->next;
        current_index++;
    }
    
    return (NULL);
}

