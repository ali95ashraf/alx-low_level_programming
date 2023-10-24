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
		while (accept[cd] != '\0')
		{
			if (accept[cd] == s[cb])
			{
				p = &s[cb];
				return (p);
			}
			cd++;
		}
		cb++;
	}

	return (0);
}

