#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_int - structure has singly linked
 * list we will be using along tasks
 *
 * @n: integer parameter
 * @next: pointer to next node
 */
struct list_int
{
	int n;
	struct list_int *next;
};
typedef struct list_int listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);

#endif
