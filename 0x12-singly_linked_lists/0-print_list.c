#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0 "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}

	return (cnt);
}
