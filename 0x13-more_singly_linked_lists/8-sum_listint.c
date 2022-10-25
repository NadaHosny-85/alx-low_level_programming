#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program returns
 * sum of all data
 */
/**
 * sum_listint - function sums
 * all data n
 *
 * @head: parameter
 *
 * Return: sum of all data
 * 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
