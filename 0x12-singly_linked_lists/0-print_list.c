#include <stdio.h>
#include "lists.h"

/**
 * print_list - this function prints all elements of a linked list
 * @h: pointer
 *
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_ s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
		return (s);
}

