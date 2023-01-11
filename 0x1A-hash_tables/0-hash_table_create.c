#include "hash_tables.h"

/**
 * *hash_table_create - function creates a hash table
 *
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 * Null is something is wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashed;
	unsigned long int i;

	hashed = malloc(sizeof(hash_table_t));
	if (hashed == NULL)
	{
		return (NULL);
	}
	hashed->size = size;
	hashed->array = malloc(sizeof(hash_node_t *) * size);

	if (hashed->array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hashed->array[i] = NULL;
	}
	return (hashed);
}
