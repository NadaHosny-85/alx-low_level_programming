#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - this is a struct for
 * a doubly linked list
 *
 * @data: this is our node
 * @next: this is our pointer to next
 * @prev: this is our pointer to prev
 *
 */
typedef struct dlistint_s
{
	int data;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
