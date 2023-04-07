#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieve data stored in the hash table
 * @ht: hash table to retrieve data from
 * @key: key used to generate hash_code
 * Return: NULL if failure or value 
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
  
index = key_index((unsigned char *) key, ht->size);
  
if(index >= ht->size)
return (NULL);

node = ht->array[index];

if(node != NULL)
{
if(strcmp(node->key, key) == 0)
return (node->value);
}
 
return (NULL);
}
