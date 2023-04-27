#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node begining of list_t
 * @head: pointer to structure
 * @str: string
 * Return: the address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *isNode;
unsigned int length = 0;

	isNode = malloc(sizeof(list_t));
	if (isNode == NULL)
	{
		free(isNode);
		return (NULL);
	}
	isNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	isNode->len = length;
	if (*head != NULL)
		isNode->next = *head;
	if (*head == NULL)
		isNode->next = NULL;
	*head = isNode;
	return (isNode);
}
