#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _strlen - returns the len of a string
 *
 * @str: string
 * Return: len of a string
 */
unsigned int _strlen(const char *str)
{
	unsigned int count = 0;

	if (str == NULL)
		return (0);

	while (str[count] != '\0')
		count++;

	return (count);
}

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
