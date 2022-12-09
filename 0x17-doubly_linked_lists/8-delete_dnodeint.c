#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program deletes
 * a specific node of at given index
 */
/**
 * delete_dnodeint_at_index - function takes
 * list and index and deletes
 * the node associated with this index
 *
 * @head: pointer to head of the list
 * @index: the index element to delete
 *
 * Return: 1 if succeeded
 * -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *
