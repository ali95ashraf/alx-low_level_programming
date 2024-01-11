#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
