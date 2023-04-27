#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: a list that enters to the function.
 */
void free_list(list_t *head)
{
list_t *prem;

	prem = head;
	while (prem != NULL)
	{
		free(prem->str);
		free(prem);
		prem = prem->next;
	}
}
