#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list
 * @str: String
 * @len: Length of the string
 * @next: Next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif

