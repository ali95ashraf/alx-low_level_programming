#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints reversed string followed by a new link
 *
 * @s: pointer to the string to print
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i--;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}

