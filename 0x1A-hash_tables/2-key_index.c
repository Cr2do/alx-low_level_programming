#include "hash_tables.h"


/**
 * key_index - key_index
 *
 * @key: const unsigned char * key
 * @size: unsigned long int size
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t value = hash_djb2(key) % size;

	return (value);

}
