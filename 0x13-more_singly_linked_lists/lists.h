#ifndef LISTS_H
#define lISTS_H

/**
 * struct list_int - structure has singly linked
 * list we will be using along tasks
 *
 * @n: integer parameter
 * @nexter: pointer to next node
 */
struct list_int{
	int n;
	struct list_int *next;
};
typedef struct list_int listint_t;
size_t print_listint(const listint_t *h);

#endif
