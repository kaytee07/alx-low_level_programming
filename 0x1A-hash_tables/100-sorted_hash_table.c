#include "hash_tables.h"
#include <string.h>
/**
 * shash_table_create - Creates a newly sorted hash_table
 * @size: This is the size of the array
 *
 * Return: NULL if error. Otherwise, a pointer to new hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
  shash_table_t *ht = NULL;

  if (size == 0)
    return (NULL);

  ht = malloc(sizeof(shash_table_t));
  if (!ht)
    return (NULL);

  ht->size = size;
  ht->array = calloc(size, sizeof(shash_node_t *));
  if (!ht->array)
    {
      free(ht);
      return (NULL);
    }

  ht->shead = NULL;
  ht->stail = NULL;

  return (ht);
}

/**
 * shash_table_set - Adds an element to hash_table
 * @ht: hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: If an error occurs, 0. Otherwise, 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
  shash_node_t *new_node = NULL, *tmp = NULL, *prev = NULL;
  unsigned long int index;

  if (!ht || !key || !*key || !value)
    return (0);

  index = key_index((const unsigned char *)key, ht->size);

  tmp = ht->array[index];
  while (tmp)
    {
      if (!strcmp(tmp->key, key))
	{
	  free(tmp->value);
	  tmp->value = strdup(value);
	  return (1);
	}
      prev = tmp;
      tmp = tmp->next;
    }

  new_node = malloc(sizeof(shash_node_t));
  if (!new_node)
    return (0);

  new_node->key = strdup(key);
  if (!new_node->key)
    {
      free(new_node);
      return (0);
    }
  new_node->value = strdup(value);
  if (!new_node->value)
    {
      free(new_node->key);
      free(new_node);
      return (0);
    }

  if (!ht->array[index])
    {
      new_node->next = NULL;
      ht->array[index] = new_node;
    }
  else if (strcmp(key, ht->array[index]->key) < 0)
    {
      new_node->next = ht->array[index];
      ht->array[index] = new_node;
    }
  else
    {
      new_node->next = prev->next;
      prev->next = new_node;
    }

  shash_table_sort(ht, new_node);

  return (1);
}

/**
 * shash_table_get - get the value associated with thr key from sorted ht
 * @ht: The sorted hash table
 * @key: The key
 *
 * Return: NULL if no key. Otherwise, the value of key
 * with the key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
  shash_node_t *node = NULL;
  unsigned long int index;

  if (!ht || !key || !*key)
    return (NULL);

  index = key_index((const unsigned char *)key, ht->size);

  node = ht->array[index];
  while (node)
    {
      if (!strcmp(node->key, key))
	return (node->value);
      node = node->next;
    }

  return (NULL);
}

/**
 * shash_table_print - Prints the key
 * @ht:pointer to the hash_table 
 *
 */

void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    unsigned long int i;

    if (ht == NULL)
        return;

    node = ht->shead;
    printf("{");
    for (i = 0; i < ht->size && node != NULL; i++)
    {
        while (node != NULL && i == key_index((const unsigned char *)node->key, ht->size))
        {
            printf("'%s': '%s'", node->key, node->value);
            node = node->snext;
            if (node != NULL)
                printf(", ");
        }
        if (i != ht->size - 1 && node != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - deletes hash table
 * #ht: pointer to the hash table
 */

void shash_table_delete(shash_table_t *ht)
{
  unsigned long int i;
  shash_node_t *node, *tmp;

  if (ht == NULL)
    return;

  for (i = 0; i < ht->size; i++)
    {
      node = ht->array[i];
      while (node)
	{
	  tmp = node->next;
	  free(node->key);
	  free(node->value);
	  free(node);
	  node = tmp;
	}
    }


  free(ht->array);
  free(ht);
}

/**
 * shash_table_print_rev - reverse hash table
 * @ht: pointer to hash table
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
  shash_node_t *node;

  if (ht == NULL)
    return;

  printf("{");
  for (node = ht->stail; node != NULL; node = node->sprev)
    {
      printf("'%s': '%s'", node->key, node->value);
      if (node->sprev != NULL)
	printf(", ");
    }
  printf("}\n");
}

void shash_table_sort(shash_table_t *ht, shash_node_t *new_node)
{
  shash_node_t *current;

  if (!ht->shead)
    {
      new_node->sprev = NULL;
      new_node->snext = NULL;
      ht->shead = new_node;
      ht->stail = new_node;
      return;
    }

  current = ht->shead;

  if (strcmp(new_node->key, current->key) < 0)
    {
      new_node->sprev = NULL;
      new_node->snext = current;
      current->sprev = new_node;
      ht->shead = new_node;
      return;
    }

 
  while (current->snext != NULL && strcmp(current->snext->key, new_node->key) < 0)
    {
      current = current->snext;
    }

  if (current == ht->stail)
    {
      ht->stail = new_node;
    }

  new_node->sprev = current;
  new_node->snext = current->snext;

  if (current->snext != NULL)
    {
      current->snext->sprev = new_node;
    }

  current->snext = new_node;
}
