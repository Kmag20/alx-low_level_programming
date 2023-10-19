#include "lists.h"

/**
 * print_list - prints elements in a singly linked list
 * @h: head of a linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *t;
	size_t cnt;

	t = h;
	while (t != NULL)
		if (t->str == NULL)
			printf("[%i] %s\n", 0, (nil));
		else
			printf("[%%] %s\n", t->len, t->str);

		t = t->next;
		cnt++;
	return (cnt);
}
