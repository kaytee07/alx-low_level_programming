#include "hash_tables.h"


/**
 * hash_table_create - this is a function that create a new hash table
 * @size: this is the to be given to the bucket that holds hash table items
 * Return: returns the pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;

if (size <= 0)
return (NULL);

table = malloc(sizeof(*table));
if (table == NULL)
return (NULL);

table->array = calloc(size, sizeof(*(table->array)));
if (table->array == NULL)
{
free(table);
return (NULL);
}

table->size = size;

return (table);
}
