#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: int type Integer
 * Return: if n is lower than 0, the function should return -1.
 * Factorial of 0 is 1.
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);

	} else if (n <= 1)
	{
		return (1);

	} else
	{
		return (n * factorial(n - 1));
	}


}
