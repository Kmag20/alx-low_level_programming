#include "lists.h"

/**
 * print_list - prints elements in a singly linked list
 * @h: head of a linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt;

	while (h != NULL)
		if (h->str == NULL)
			printf("[%i] %s\n", 0, (nil));
		else
			printf("[%%] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	return (cnt);
}
