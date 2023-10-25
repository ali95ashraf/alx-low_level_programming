#include "main.h"

/**
 * square - Calculates the square root of a number using recursion.
 * @n: The number for which the square root is calculated.
 * @val: The current value to check.
 *
 * Return: The square root of n if found, -1 if there's no integer square root.
*/

int square(int n, int val);

/**
 * _sqrt_recursion - Returns the square root of a number using recursion.
 * @n: The number for which the square root is calculated.
 *
 * Return: The square root of n if found, -1 if there's no integer square root.
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - Calculates the square root of a number using recursion.
 * @n: The number for which the square root is calculated.
 * @val: The current value to check.
 *
 * Return: The square root of n if found, -1 if there's no integer square root.
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

