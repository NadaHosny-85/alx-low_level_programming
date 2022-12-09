#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program sums all the
 * data in a list
 */
/**
 * sum_dlistint - function takes a doubly
 * linked list and sums all the elements within
 * it and returns sum of all nodes
 *
 * @head: pointer to the head of the list
 *
 * Return: sum integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
