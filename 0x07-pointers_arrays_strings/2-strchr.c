#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: A pointer to the string to be searched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the character 'c' in 's',
 * or NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	int cd;

	/* Loop through the string 's' until the null terminator is reached. */
	for (cd = 0; s[cd] != '\0'; cd++)
	{
		/* If the current character matches 'c' */
		/* return a pointer to it. */
		if (s[cd] == c)
		{
			return (s + cd);
		}
	}
	/* If 'c' is not found, return NULL. */
	return ('\0');
}

