#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b.
 * @s: A pointer to the memory area to be filled.
 * @b: The byte to be used for filling.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cb;

	/* Loop through the memory area pointed to by s */
	for (cb = 0; n > 0; cb++, n--)
	{
		/* Set each byte to the constant byte b */
		s[cb] = b;
	}
	/* Return a pointer to the filled memory area */
	return (s);
}

