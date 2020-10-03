#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of table to be created
 * Return: pointer to hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;
	unsigned int index;

	if (size < 1)
	{
		return (NULL);
	}

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;

	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);

	index = 0;
	while (index < size)
	{
		hash_t->array[index] = NULL;
		index++;
	}

	return (hash_t);
}
