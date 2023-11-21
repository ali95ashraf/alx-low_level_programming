#include "lists.h"

/**
 * Return: value of popped node
 * @head: address of pointer to first node
 *
 * pops head node of list
 * pop_listint
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
