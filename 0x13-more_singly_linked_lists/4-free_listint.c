#include "lists.h"

/**
 * Return: void
 * @head: pointer to first node
 *
 * frees a list of ints
 * free_listint
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
