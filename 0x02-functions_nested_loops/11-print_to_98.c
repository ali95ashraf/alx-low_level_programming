#include <stdio.h>

/**
 * print_to_98 - Print numbers from n to 98, separated by a comma and space.
 *
 * @n: The starting number.
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = n; count > 98; count--)
		{
			printf("%d, ", count);
		}
	}
	else
	{
		for (count = n; count < 98; count++)
		{
			printf("%d, ", count);
		}
	}
	printf("98\n");
}

