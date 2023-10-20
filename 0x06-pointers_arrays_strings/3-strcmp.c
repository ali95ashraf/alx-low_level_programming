#include "main.h"

/**
 * _strcmp - conpres two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if true,o if false
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s@ - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
