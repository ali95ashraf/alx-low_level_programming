#include "main.h"
#include <stdio.h>

/**
 * check_prime - Helper function to check if a number is prime.
 * @n: The number to be checked.
 * @othrn: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 if it's not.
*/
int check_prime(int n, int othrn);

/**
 * is_prime_number - Check if a number is prime using recursion.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 if it's not.
*/
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - Helper function to check if a number is prime.
 * @n: The number to be checked.
 * @othrn: The current divisor to check.
 *
 * This function checks if the given number is prime or not by recursively
 * testing divisibility with increasing divisors.
 *
 * @n: The number to be checked for primality.
 * @othrn: The current divisor being tested.
 *
 * Return: 1 if the number is prime, 0 if it's not.
 */
int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);  /* The number is prime */
	else if (n % othrn == 0 || n <= 1)
		return (0);  /* The number is not prim */
	else
		return (check_prime(n, othrn + 1));
}

