#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements in a singly linked list
 * @h: head of a linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
		if (h->str == NULL)
			printf("[%i] %s\n", 0, "(nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	return (cnt);
}
