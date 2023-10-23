#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing characters to search for.
 * Return: A pointer to the byte in 's'
 *				that matches one of the bytes in 'accept',
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int cd, cb;
	char *p;

	cd = 0;
	while (s[cd] != '\0')
	{
		cd = 0;
		while (accept[cb] != '\0')
		{
			if (accept[cb] == s[cd])
			{
				p = &s[cd];
				return (p);
			}
			cb++;
		}
		cd++;
	}

	return (0);
}

