#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string name
 * @f: the printing function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
