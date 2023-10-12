#include "main.h"

/**
 * _isdigit - checks if the input is a digit between 0 and 9
 * @c: input character
 *
 * Return: 1 if it is a digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

