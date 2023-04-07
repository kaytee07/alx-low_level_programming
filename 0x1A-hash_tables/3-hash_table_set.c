#include "hash_tables.h"
#include <string.h>

/**
 * create_node - this create a key value node that will be store in hashtable
 * @key: this is the key to be assigned in node->key
 * @value: this is the value to be assigned to the node-value
 * Return: returns the pointer to the created node or NULL if failure
 */

hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *node;
node = malloc(sizeof(hash_node_t));
if (node == NULL)
{
free(node);
return (NULL);
}
if (!key)
return (NULL);

if (!value)
return (NULL);

node->key = malloc(strlen(key) + 1);
if (node->key == NULL)
{
free(node->key);
free(node);
return (NULL);
}
node->value = malloc(strlen(value) + 1);
if (node->value == NULL)
{
free(node->key);
free(node->value);
free(node);
return (NULL);
}

strcpy(node->key, key);
strcpy(node->value, value);
node->next = NULL;

return (node);
}

/**
 * hash_table_set - this add element to the hash table
 * @ht: this is the hash table we'll be accessing and retrieving data from
 * @key: this key is used to generate the hash_code
 * @value: value is the value attached to the key
 * Return: 1 if data was set succeffuly and 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
unsigned long int hash_code;
hash_node_t *current_node;
if (!ht || !key || !*key)
return (0);
node  = create_node(key, value);
if (node == NULL)
return (0);
hash_code = key_index((const unsigned char *) key, ht->size);
current_node = ht->array[hash_code];
if (current_node == NULL)
{
ht->array[hash_code] = node;
return (1);
}
else if (strcmp(current_node->key, key) == 0)
{
strcpy(ht->array[hash_code]->value, value);
return (0);
}
else
{
while (current_node->next != NULL)
{
if (strcmp(current_node->key, key) == 0)
{
strcpy(current_node->value, value);
free(node->key);
free(node->value);
free(node);
return (1);
}
if (current_node->next == NULL)
break;
current_node = current_node->next;
}
current_node->next = node;
return (1);
}
return (1);
}
