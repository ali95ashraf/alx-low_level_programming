#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 *         if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int cd, cb;

	for (cd = 0; haystack[cd] != '\0'; cd++)
	{
		for (cb = cd; haystack[cb] != '\0' && needle[cb - cd] != '\0'; cb++)
		{
			if (haystack[cb] != needle[cb - cd])
			{
				break;
			}
		}
		if (needle[cb - cd] == '\0')
		{
			return (haystack + cd);
		}
	}

	return (0);
}

