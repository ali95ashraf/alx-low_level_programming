#include "main.h"

/**
 * create_array - an array of characters with
 *		a specified size, filled with a given character.
 *
 * @size: The size of the array to create.
 * @c: The character to fill the array with.
 * Return: pointer to the newly created array
 *		or NULL if size is 0 or memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
