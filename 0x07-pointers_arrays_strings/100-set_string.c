#include "main.h"

/**
 * set_string - Sets the value of a pointer to a new string.
 * @s: A pointer to a pointer to be set.
 * @to: The new string value to set.
*/
void set_string(char **s, char *to)
{
	*s = to;
}

