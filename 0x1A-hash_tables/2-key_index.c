#include "hash_tables.h"

/**
 * key_index - returns the index where a key value is tored on hashtable
 * @key: this is the value to be passed to the hash function to gen hash_code
 * @size: size is used with the hash code to generate the index of the data
 * Return: returns the hash code of the value in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
if (!key)
return (1);

if (size <= 0)
return (1);

index = hash_djb2(key) % size;
return (index);
}
