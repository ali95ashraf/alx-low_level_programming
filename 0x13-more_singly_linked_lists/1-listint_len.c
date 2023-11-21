#include "lists.h"

/**
 * Return: size of list
 * @h: pointer to first node
 *
 * prints a linked lists
 * print_listint
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
