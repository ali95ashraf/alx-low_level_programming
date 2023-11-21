#include "lists.h"

/**
 * Return: void
 * @head: address of pointer to first node
 *
 * frees a list of ints
 * free_listint2
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
