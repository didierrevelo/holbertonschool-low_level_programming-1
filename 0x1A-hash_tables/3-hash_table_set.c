#include "hash_tables.h"
/**
 * hash_table_set - set hash table
 * @ht: pointer
 * @key: string for the key
 * @value: value of key
 * Return: 0 if failed, 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned int index_hash;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	index_hash = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index_hash];

	if (ht->array[index_hash] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t *));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index_hash] = new_node;
		return (1);
	}

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index_hash];
	ht->array[index_hash] = new_node;
	return (1);
}
