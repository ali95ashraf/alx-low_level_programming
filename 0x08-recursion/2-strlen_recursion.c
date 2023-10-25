#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string for which to find the length.
 *
 * Return: The length of the string.
*/

int _strlen_recursion(char *s)
{
	int cd = 0;

	if (*s > '\0')
	{
		cd += _strlen_recursion(s + 1) + 1;
	}
	return (cd);
}
