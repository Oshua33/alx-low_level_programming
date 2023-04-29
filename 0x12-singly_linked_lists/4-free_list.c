#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * fre_list - function that frees a linked list
 * @head: list_t list to be free
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
