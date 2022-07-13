#include "hash_tables.h"

/**
 * Create a hash table 
 * 
 * @size: Unsigned long int parameter 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_t;

	if (size == 0)
		return (NULL);
	
	hash_t = malloc(sizeof(hash_table_t));

	if (!hash_t)
		return (NULL);

	hash_t->size = size;
	hash_t->array = calloc(size, sizeof(hash_node_t));

	return (hash_t);

}
