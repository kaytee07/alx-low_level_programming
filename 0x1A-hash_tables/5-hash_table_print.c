#include "hash_tables.h"
#include <stdio.h>


/**
 * hash_table_print - print the content of a hash table
 * @ht: hash table to be traversed and and printed
 *
 */

void hash_table_print(const hash_table_t *ht)
{

hash_node_t *item;
unsigned char comma = 0;
unsigned long int i;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (comma == 1)
printf(", ");

item = ht->array[i];
while (item != NULL)
{
printf("'%s': '%s'", item->key, item->value);
item = item->next;
if (item != NULL)
printf(", ");
}
comma = 1;
}
}
printf("}\n");
}
