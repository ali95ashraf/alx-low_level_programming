#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a linked list
* @head: Address of a pointer to the head node
* @str: String to be added as the str field of the new node
*
* Return: Address of the newly added node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);

	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _strlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
