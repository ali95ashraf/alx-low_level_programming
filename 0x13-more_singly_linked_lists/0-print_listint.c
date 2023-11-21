#include "lists.h"
/**
 * Return: size of list
 * @h: pointer to first node
 *
 * prints a linked lists
 * print_listint
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
