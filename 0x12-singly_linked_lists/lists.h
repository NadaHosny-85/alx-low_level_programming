#ifndef LISTS_H
#define LISTS_H

/**
 * struct sin_lists - a singly linked lists data
 * structure which will be used for task
 *
 * @str: the string
 *
 * @str_len: string length
 *
 * @next_node: the pointer to next node
 */
struct sin_lists
{
	char *str;
	unsigned int len;
	struct sin_lists *next;
};
typedef struct sin_lists list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
