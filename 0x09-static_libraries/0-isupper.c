#include "main.h"

/**
 * _isupper - Check if c is an uppercase letter
 * @c: The input character
 *
 * Return: 1 if it's an uppercase letter, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

