#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *c)
{
	char *cp = c; /* Copy the original pointer to return it */
	char key[] = "AEOTL";
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			/*32 is the diffarence between Lower case latters and apper case letters*/
			if (*c == key[i] || *c == key[i] + 32)
			{
				/* Replace the character with the corresponding value */
				*c = 48 + value[i];
				break; /* Exit the loop after a match is found */
			}
		}
		c++;
	}

	return (cp); /* Return the original pointer */
}

