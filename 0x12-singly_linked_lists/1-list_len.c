#include "main.h"

/**
 * list_len - prints the length of the list
 * @h: head of th elinked list
 * Return: size of the nodes
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
		h = h->next;
		cnt++;
	}
	return (cnt);
}
