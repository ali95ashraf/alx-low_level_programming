#include "main.h"

/**
 * print_array - Prints elements of an array of integers.
 *
 * @a: Pointer to the integer array to print.
 * @n: Number of elements in the array.
 *
 * Return: Nothing.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

