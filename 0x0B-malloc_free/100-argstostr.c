#include <main.h>

/**
 * _strlen - Find length of a stringi
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * argstostr - Concatenates all arguments of your program
 * @ac: Number of arguments
 * @av: Arguments
 * Return: Pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		nc += _strlen(av[i]);
	}
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];
		s[cmpt] = '\n'; /* Adding newline after each argument */
		cmpt++;
	}
	s[cmpt] = '\0'; /* Terminating the final string */
	return (s);
}

