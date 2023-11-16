#include "lists.h"

/**
* list_len - Counts the number of nodes in a linked list
* @h: Pointer to the first node of the list
* Return: Number of nodes in the list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
