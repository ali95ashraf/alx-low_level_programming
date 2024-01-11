#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
