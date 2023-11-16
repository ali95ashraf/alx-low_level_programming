#include "lists.h"

void _constructor(void) __attribute__((constructor));

/**
* _constructor - Function executed before main
*
* This function is automatically executed before the main function.
* It serves as an initializer that runs before the program's entry point.
* It prints a message indicating a specific action.
*
* Return: void
*/
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
