#include "main.h"

/**
 * _memcpy - Copies 'n' bytes from the 'src'
 *				memory area to the 'dest' memory area.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the 'dest' memory area.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cd;

	/* Loop through the source memory area 'src' */
	for (cd = 0; cd < n; cd++)
	{
		/* Copy each byte from 'src' to 'dest' */
		dest[cd] = src[cd];
	}
	/* Return a pointer to the destination memory area 'dest' */
	return (dest);
}

