#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);  /* Return -1 for negative exponent (error).*/
	}
	else if (y == 0)
	{
		return (1);   /* Anything raised to the power of 0 is 1.*/
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

