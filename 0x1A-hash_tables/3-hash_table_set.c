#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - this add element to the hash table
 * @ht: this is the hash table we'll be accessing and retrieving data from
 * @key: this key is used to generate the hash_code
 * @value: value is the value attached to the key
 * Return: 1 if data was set succeffuly and 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node, *tmp_node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
tmp_node = ht->array[index];
while (tmp_node)
{
if (strcmp(tmp_node->key, key) == 0)
{
free(tmp_node->value);
tmp_node->value = strdup(value);
if (tmp_node->value == NULL)
return (0);
return (1);
}
tmp_node = tmp_node->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}



