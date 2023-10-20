#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: pointer to the head of a list
 * @str: String in the struct
 * Return: Pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;
	return (new);
}
