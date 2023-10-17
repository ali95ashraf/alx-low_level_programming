#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: String parameter to reverse.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	/* Find the string length without the null character */
	for (len = 0; s[len] != '\0'; ++len)
		;

	/* Swap the string by looping through half of the string */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i]; /* -1 because the array starts from 0 */
		s[len - 1 - i] = temp;
	}
}

