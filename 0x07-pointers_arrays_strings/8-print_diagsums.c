#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: A pointer to the square matrix.
 * @size: The size of the matrix.
*/

void print_diagsums(int *a, int size)
{
	int cd, s1 = 0, s2 = 0;

	for (cd = 0; cd < size; cd++)
	{
		s1 += a[cd];
		s2 += a[size - cd - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}

