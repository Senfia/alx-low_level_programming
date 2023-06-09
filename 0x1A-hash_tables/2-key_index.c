#include "hash_tables.h"

/**
* key_index - finds the index of a hashed key using hash_djb2()
* @key: the key
* @size: size of the array of the hash table
* Return: index
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
