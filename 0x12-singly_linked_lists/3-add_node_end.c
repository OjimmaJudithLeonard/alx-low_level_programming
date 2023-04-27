#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *present;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = NULL;
	present = *head;

	if (present == NULL)
	{
		*head = new;
	}
	else
	{
		while (present->next != NULL)
			present = present->next;
		present->next = new;
	}

	return (*head);
}
