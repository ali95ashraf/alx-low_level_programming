#include "lists.h"
/**
 * Return: pointer to node
 * @index: index of node to get
 * @head: pointer to first node
 *
 * returns node at index
 * get_nodeint_at_index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++);
	return (node);
}
