#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring consisting of characters
 * that are in the 'accept' string.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing characters to search for.
 *
 * Return: The number of bytes in the initial segment of 's' that consist
 * only of characters found in 'accept'.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cd, cb;

	for (cd = 0; s[cd] != '\0'; cd++)
	{
		for (cb = 0; accept[cb] != s[cd]; cb++)
		{
			if (accept[cb] == '\0')
				return (cd);
		}
	}

	return (cd);
}

